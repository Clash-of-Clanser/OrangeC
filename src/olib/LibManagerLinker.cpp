/* Software License Agreement
 *
 *     Copyright(C) 1994-2020 David Lindauer, (LADSoft)
 *
 *     This file is part of the Orange C Compiler package.
 *
 *     The Orange C Compiler package is free software: you can redistribute it and/or modify
 *     it under the terms of the GNU General Public License as published by
 *     the Free Software Foundation, either version 3 of the License, or
 *     (at your option) any later version.
 *
 *     The Orange C Compiler package is distributed in the hope that it will be useful,
 *     but WITHOUT ANY WARRANTY; without even the implied warranty of
 *     MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *     GNU General Public License for more details.
 *
 *     You should have received a copy of the GNU General Public License
 *     along with Orange C.  If not, see <http://www.gnu.org/licenses/>.
 *
 *     contact information:
 *         email: TouchStone222@runbox.com <David Lindauer>
 *
 */

#include "LibManager.h"
#include <cstring>

void LibManager::InitHeader()
{
    header = {};
    header.sig = LibHeader::LIB_SIG;
}
bool LibManager::LoadLibrary()
{
    memset(&header, 0, sizeof(header));
    fseek(stream, 0, SEEK_SET);
    fread((char*)&header, sizeof(header), 1, stream);
    if (header.sig != LibHeader::LIB_SIG)
        return false;
    fseek(stream, header.namesOffset, SEEK_SET);
    files.ReadNames(stream, header.filesInModule);
    fseek(stream, header.offsetsOffset, SEEK_SET);
    files.ReadOffsets(stream, header.filesInModule);
    return true;
}
ObjInt LibManager::Lookup(const ObjString& name)
{
    if (header.sig == LibHeader::LIB_SIG)
        return dictionary.Lookup(stream, header.dictionaryOffset, header.dictionaryBlocks, name);
    return 0;
}
