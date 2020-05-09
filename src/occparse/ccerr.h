#pragma once
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
#define ERR_UNKNOWN 0
#define ERR_TOO_MANY_ERRORS 1
#define ERR_CONSTTOOLARGE 2
#define ERR_CONSTANT_VALUE_EXPECTED 3
#define ERR_INVCONST 4
#define ERR_INVFPCONST 5
#define ERR_INVALID_CHAR_CONSTANT 6
#define ERR_UNTERM_CHAR_CONSTANT 7
#define ERR_INVALID_STRING_CONSTANT 8
#define ERR_UNTERM_STRING_CONSTANT 9
#define ERR_STRING_CONSTANT_TOO_LONG 10
#define ERR_NEEDY 11
#define ERR_NEEDSTRING 12
#define ERR_NEED_CONSTANT_OR_ADDRESS 13
#define ERR_NEED_INTEGER_TYPE 14
#define ERR_NEED_INTEGER_EXPRESSION 15
#define ERR_IDENTIFIER_EXPECTED 16
#define ERR_DUPLICATE_IDENTIFIER 17
#define ERR_UNDEFINED_IDENTIFIER 18
#define ERR_TOO_MANY_IDENTIFIERS 19
#define ERR_UNEXPECTED_EOF 20
#define ERR_EOF_NONTERM 21
#define ERR_NESTEDCOMMENTS 22
#define ERR_EOF_COMMENT 23
#define ERR_EOF_PREPROC 24
#define ERR_PPELIF_NO_IF 25
#define ERR_PPELSE_NO_IF 26
#define ERR_PPENDIF_NO_IF 27
#define ERR_MACROSUBS 28
#define ERR_WRONGMACROARGS 29
#define ERR_EOL_UNEXPECTED 30
#define ERR_UNKNOWNDIR 31
#define ERR_PP_DIR_ERROR 32
#define ERR_INCL_FILE_NAME 33
#define ERR_INCL_CANT_OPEN 34
#define ERR_PP_INV_DEFINITION 35
#define ERR_PP_REDEFINE_NOT_SAME 36
#define ERR_PRAGERROR 37
#define ERR_PRAGWARN 38
#define ERR_PREVIOUS 39
#define ERR_UNKNOWN_CHAR 40
#define ERR_UNSIZED 41
#define ERR_UNSIZED_TYPE 42
#define ERR_MISMATCHED_STRUCTURED_TYPE_IN_REDEFINITION 43
#define ERR_STRUCTURE_BODY_NO_MEMBERS 44
#define ERR_ANONYMOUS_UNION_WARNING 45
#define ERR_ANONYMOUS_STRUCT_WARNING 46
#define ERR_STRUCT_HAS_BODY 47
#define ERR_STRUCT_MAY_NOT_CONTAIN_INCOMPLETE_STRUCT 48
#define ERR_ENUM_CONSTANTS_DEFINED 49
#define ERR_ANSI_ENUM_NO_COMMA 50
#define ERR_ORIGINAL_TYPE_NOT_ENUMERATION 51
#define ERR_ANSI_ENUM_NEEDS_BODY 52
#define ERR_BIT_STRUCT_MEMBER 53
#define ERR_ANSI_INT_BIT 54
#define ERR_BIT_FIELD_INTEGER_TYPE 55
#define ERR_BIT_FIELD_TOO_LARGE 56
#define ERR_BIT_FIELD_MUST_CONTAIN_AT_LEAST_ONE_BIT 57
#define ERR_MEMBER_NAME_EXPECTED 58
#define ERR_POINTER_TO_STRUCTURE_EXPECTED 59
#define ERR_STRUCTURED_TYPE_EXPECTED 60
#define ERR_INVALID_STORAGE_CLASS 61
#define ERR_ABSOLUTE_NEEDS_ADDRESS 62
#define ERR_TOO_MANY_STORAGE_CLASS_SPECIFIERS 63
#define ERR_ANSI_FORBID_BOTH_EXTERN_STATIC 64
#define ERR_INLINE_NO_STATIC 65
#define ERR_INLINE_CANNOT_REFER_TO_STATIC 66
#define ERR_NO_LINKAGE_HERE 67
#define ERR_TOO_MANY_LINKAGE_SPECIFIERS 68
#define ERR_DECLARE_SYNTAX 69
#define ERR_DECLARATION_DIFFERENT_QUALIFIERS 70
#define ERR_NO_DECLARATION_HERE 71
#define ERR_DUPLICATE_TYPE_QUALIFIER 72
#define ERR_MISSING_TYPE_SPECIFIER 73
#define ERR_MISSING_TYPE_FOR_PARAMETER 74
#define ERR_C99_KEYWORD 75
#define ERR_TOO_MANY_TYPE_SPECIFIERS 76
#define ERR_TOO_MANY_IDENTIFIERS_IN_DECLARATION 77
#define ERR_TYPE_C99 78
#define ERR_VOID_NOT_ALLOWED 79
#define ERR_INCOMPATIBLE_TYPE_CONVERSION 80
#define ERR_REDEFINITION_OF_TYPE 81
#define ERR_TOO_MANY_QUALIFIERS 82
#define ERR_TYPE_MISMATCH_IN_REDECLARATION 83
#define ERR_TWO_OPERANDS_SAME_TYPE 84
#define ERR_VLA_c99 85
#define ERR_VLA_BLOCK_SCOPE 86
#define ERR_UNSIZED_VLA_PARAMETER 87
#define ERR_ARRAY_QUALIFIERS_C99 88
#define ERR_QUAL_LAST_ARRAY_ELEMENT 89
#define ERR_ARRAY_QUAL_PARAMETER_ONLY 90
#define ERR_ONLY_FIRST_INDEX_MAY_BE_EMPTY 91
#define ERR_ARRAY_INDEX_INTEGER_TYPE 92
#define ERR_ARRAY_NEED_CLOSEBRACKET 93
#define ERR_INVALID_ARRAY_INDEX 94
#define ERR_ARRAY_INVALID_INDEX 95
#define ERR_EMPTY_ARRAY_LAST 96
#define ERR_ARRAY_EXPECTED 97
#define ERR_ARRAY_INDEX_OUT_OF_RANGE 98
#define ERR_TYPE_MISMATCH_FUNC_DECLARATION 99
#define ERR_FUNCTION_BODY_EXPECTED 100
#define ERR_FUNCTION_PARAMETER_EXPECTED 101
#define ERR_PARAMETER_MUST_HAVE_NAME 102
#define ERR_STRUCT_UNION_NO_FUNCTION 103
#define ERR_FUNCTION_NO_RETURN_FUNCTION_ARRAY 104
#define ERR_FUNCTION_SHOULD_RETURN_VALUE 105
#define ERR_VOID_ONLY_PARAMETER 106
#define ERR_INLINE_NOT_ALLOWED 107
#define ERR_MAIN_CANNOT_BE_INLINE_FUNC 108
#define ERR_FUNCTION_TAKES_NO_PARAMETERS 109
#define ERR_CALL_FUNCTION_NO_PROTO 110
#define ERR_PARAMETER_LIST_TOO_LONG 111
#define ERR_PARAMETER_LIST_TOO_SHORT 112
#define ERR_CALL_OF_NONFUNCTION 113
#define ERR_TYPE_MISMATCH_IN_ARGUMENT 114
#define ERR_EXTERN_NO_INIT 115
#define ERR_TYPEDEF_NO_INIT 116
#define ERR_VLA_NO_INIT 117
#define ERR_TOO_MANY_INITIALIZERS 118
#define ERR_C99_STYLE_INITIALIZATION_USED 119
#define ERR_C99_NON_CONSTANT_INITIALIZATION 120
#define ERR_BIT_NO_INITIAL_VALUE 121
#define ERR_CANNOT_INITIALIZE 122
#define ERR_ABSOLUTE_NOT_INITIALIZED 123
#define ERR_CONSTANT_MUST_BE_INITIALIZED 124
#define ERR_STRING_TYPE_MISMATCH_IN_INITIALIZATION 125
#define ERR_MULTIPLE_INITIALIZATION 126
#define ERR_INITIALIZATION_MAY_BE_BYPASSED 127
#define ERR_GOTO_BYPASSES_VLA_INITIALIZATION 128
#define ERR_NONPORTABLE_POINTER_CONVERSION 129
#define ERR_NONPORTABLE_POINTER_COMPARISON 130
#define ERR_INVALID_POINTER_CONVERSION 131
#define ERR_SUSPICIOUS_POINTER_CONVERSION 132
#define ERR_SHORT_POINTER 133
#define ERR_INVALID_BASE_TYPE_FOR_STRING_CONSTANT 134
#define ERR_LVALUE 135
#define ERR_DEREF 136
#define ERR_USED_WITHOUT_ASSIGNMENT 137
#define ERR_POSSIBLE_INCORRECT_ASSIGNMENT 138
#define ERR_ANSI_FORBIDS_IMPLICIT_CONVERSION_FROM_VOID 139
#define ERR_SYM_ASSIGNED_VALUE_NEVER_USED 140
#define ERR_UNUSED_PARAMETER 141
#define ERR_UNUSED_VARIABLE 142
#define ERR_UNUSED_STATIC 143
#define ERR_VARIABLE_OBSCURES_VARIABLE_AT_HIGHER_SCOPE 144
#define ERR_NOT_AN_ALLOWED_TYPE 145
#define ERR_CANNOT_MODIFY_CONST_OBJECT 146
#define ERR_EXPRESSION_SYNTAX 147
#define ERR_SIGNED_UNSIGNED_MISMATCH_RELAT 148
#define ERR_SIZEOF_NO_FUNCTION 149
#define ERR_ILL_STRUCTURE_ASSIGNMENT 150
#define ERR_ILL_STRUCTURE_OPERATION 151
#define ERR_ILL_USE_OF_COMPLEX 152
#define ERR_ILL_USE_OF_FLOATING 153
#define ERR_ILL_POINTER_OPERATION 154
#define ERR_ILL_POINTER_ADDITION 155
#define ERR_ILL_POINTER_SUBTRACTION 156
#define ERR_CANNOT_TAKE_ADDRESS_OF_BIT_FIELD 157
#define ERR_CANNOT_TAKE_ADDRESS_OF_REGISTER 158
#define ERR_MUST_TAKE_ADDRESS_OF_MEMORY_LOCATION 159
#define ERR_CANNOT_USE_bool_HERE 160
#define ERR_HOOK_NEEDS_COLON 161
#define ERR_SWITCH_SELECTION_INTEGRAL 162
#define ERR_BREAK_NO_LOOP 163
#define ERR_CASE_NO_SWITCH 164
#define ERR_DUPLICATE_CASE 165
#define ERR_CASE_INTEGER_CONSTANT 166
#define ERR_CONTINUE_NO_LOOP 167
#define ERR_DEFAULT_NO_SWITCH 168
#define ERR_SWITCH_NEEDS_OPENPA 169
#define ERR_SWITCH_NEEDS_CLOSEPA 170
#define ERR_SWITCH_HAS_DEFAULT 171
#define ERR_DO_STMT_NEEDS_WHILE 172
#define ERR_DOWHILE_NEEDS_OPENPA 173
#define ERR_DOWHILE_NEEDS_CLOSEPA 174
#define ERR_WHILE_NEEDS_OPENPA 175
#define ERR_WHILE_NEEDS_CLOSEPA 176
#define ERR_FOR_NEEDS_SEMI 177
#define ERR_FOR_NEEDS_OPENPA 178
#define ERR_FOR_NEEDS_CLOSEPA 179
#define ERR_IF_NEEDS_OPENPA 180
#define ERR_IF_NEEDS_CLOSEPA 181
#define ERR_MISPLACED_ELSE 182
#define ERR_GOTO_NEEDS_LABEL 183
#define ERR_DUPLICATE_LABEL 184
#define ERR_UNDEFINED_LABEL 185
#define ERR_RETURN_MUST_RETURN_VALUE 186
#define ERR_CANNOT_RETURN_VOID_VALUE 187
#define ERR_RETURN_NO_VALUE 188
#define ERR_RETMISMATCH 189
#define ERR_FUNCTION_RETURNING_ADDRESS_STACK_VARIABLE 190
#define ERR_EXPRESSION_HAS_NO_EFFECT 191
#define ERR_UNEXPECTED_END_OF_BLOCKDATA 192
#define ERR_UNREACHABLE_CODE 193
#define ERR_ANSI_CANNOT_OMIT_SEMI 194
#define ERR_NO_REF_POINTER_REF 195
#define ERR_ARRAY_OF_REFS_NOT_ALLOWED 196
#define ERR_REF_MUST_INITIALIZE 197
#define ERR_REF_INIT_REQUIRES_LVALUE 198
#define ERR_REF_INIT_TYPE_CANNOT_BE_BOUND 199
#define ERR_REF_CLASS_NO_CONSTRUCTORS 200
#define ERR_REF_NOT_INITIALIZED_IN_CONSTRUCTOR 201
#define ERR_REF_NO_QUALIFIERS 202
#define ERR_REF_RETURN_LOCAL 203
#define ERR_CANNOT_CONVERT_TYPE 204
#define ERR_CANNOT_CAST_TYPE 205
#define ERR_INVALID_USE_OF_NAMESPACE 206
#define ERR_NO_NAMESPACE_IN_FUNCTION 207
#define ERR_NOT_A_NAMESPACE 208
#define ERR_NAMESPACE_NOT_INLINE 209
#define ERR_EXPECTED_NAMESPACE_NAME 210
#define ERR_CYCLIC_USING_DIRECTIVE 211
#define ERR_PURESTRING 212
#define ERR_ASM ERR_PURESTRING
#define ERR_CREATE_TEMPORARY 213
#define ERR_TYPE_NAME_EXPECTED 214
#define ERR_AMBIGUITY_BETWEEN 215
#define ERR_UNKNOWN_LINKAGE 216
#define ERR_CHAR1632_CONSTANT_TOO_LONG 217
#define ERR_EOF_RAW_STRING 218
#define ERR_RAW_STRING_INVALID_CHAR 219
#define ERR_MAIN_CANNOT_BE_STATIC_FUNC 220
#define ERR_MAIN_CANNOT_BE_CONSTEXPR 221
#define ERR_CONSTANT_EXPRESSION_EXPECTED 222
#define ERR_CONSTANT_FUNCTION_EXPECTED 223
#define ERR_CONSTEXPR_REQUIRES_INITIALIZER 224
#define ERR_CONSTEXPR_SIMPLE_TYPE 225
#define ERR_FUNCTION_RETURNING_REF_SHOULD_RETURN_VALUE 226
#define ERR_QUALIFIED_NAME_NOT_ALLOWED_HERE 227
#define ERR_NAME_IS_NOT_A_MEMBER_OF_NAME 228
#define ERR_QUALIFIER_NOT_A_CLASS_OR_NAMESPACE 229
#define ERR_LINKAGE_MISMATCH_IN_FUNC_OVERLOAD 230
#define ERR_OVERLOAD_DIFFERS_ONLY_IN_RETURN_TYPE 231
#define ERR_NO_OVERLOAD_MATCH_FOUND 232
#define ERR_CANNOT_REDECLARE_DEFAULT_ARGUMENT 233
#define ERR_NO_LOCAL_VAR_OR_PARAMETER_DEFAULT_ARGUMENT 234
#define ERR_NO_POINTER_TO_FUNCTION_DEFAULT_ARGUMENT 235
#define ERR_NO_DEFAULT_ARGUMENT_IN_TYPEDEF 236
#define ERR_NO_THIS_DEFAULT_ARGUMENT 237
#define ERR_MISSING_DEFAULT_ARGUMENT 238
#define ERR_DELETE_ON_REDECLARATION 239
#define ERR_DELETED_FUNCTION_REFERENCED 240
#define ERR_MAIN_CANNOT_BE_DELETED 241
#define ERR_ENUMERATION_OUT_OF_RANGE_OF_BASE_TYPE 242
#define ERR_ENUMERATED_TYPE_NEEDS_NAME 243
#define ERR_CANNOT_OMIT_ENUMERATION_BASE 244
#define ERR_REDEFINITION_OF_ENUMERATION_SCOPE_OR_BASE_TYPE 245
#define ERR_CANNOT_DEFINE_ENUMERATION_CONSTANT_HERE 246
#define ERR_SCOPED_TYPE_MISMATCH 247
#define ERR_SIZEOF_BITFIELD 248
#define ERR_SIZEOF_UNFIXED_ENUMERATION 249
#define ERR_AUTO_NEEDS_INITIALIZATION 250
#define ERR_AUTO_NOT_ALLOWED 251
#define ERR_REF_INITIALIZATION_DISCARDS_QUALIFIERS 252
#define ERR_REF_INITIALIZATION_CANNOT_USE_RVALUE_OF_TYPE 253
#define ERR_GLOBAL_ANONYMOUS_UNION_NOT_STATIC 254
#define ERR_UNION_CANNOT_HAVE_BASE_CLASSES 255
#define ERR_UNION_CANNOT_BE_BASE_CLASS 256
#define ERR_CANNOT_REDEFINE_ACCESS_FOR 257
#define ERR_CANNOT_ACCESS 258
#define ERR_NONFUNCTION_CANNOT_BE_DECLARED_VIRTUAL 259
#define ERR_FUNCTION_CAN_HAVE_ONE_FINAL_OR_OVERRIDE 260
#define ERR_NAMESPACE_NO_STRUCT 261
#define ERR_NOT_UNAMBIGUOUS_BASE 262
#define ERR_RETURN_TYPES_NOT_COVARIANT 263
#define ERR_OVERRIDING_FINAL_VIRTUAL_FUNC 264
#define ERR_FUNCTION_DOES_NOT_OVERRIDE 265
#define ERR_AMBIGUOUS_VIRTUAL_FUNCTIONS 266
#define ERR_DELETED_VIRTUAL_FUNC 267
#define ERR_FINAL_BASE_CLASS 268
#define ERR_LOCAL_CLASS_FUNCTION_NEEDS_BODY 269
#define ERR_MEMBER_SAME_NAME_AS_CLASS 270
#define ERR_PURE_SPECIFIER_CONST_ZERO 271
#define ERR_SPECIFIER_VIRTUAL_FUNC 272
#define ERR_FUNCTION_NOT_IN_STRUCT 273
#define ERR_AMBIGUOUS_MEMBER_DEFINITION 274
#define ERR_ACCESS_MEMBER_NO_OBJECT 275
#define ERR_NON_CONST_FUNCTION_CALLED_FOR_CONST_OBJECT 276
#define ERR_BASE_CLASS_INCLUDED_MORE_THAN_ONCE 277
#define ERR_ONLY_MEMBER_CONST_VOLATILE 278
#define ERR_ILLEGAL_USE_OF_MEMBER_PTR 279
#define ERR_NORETURN 280
#define ERR_DUPLICATE_TYPE_IN_GENERIC 281
#define ERR_GENERIC_TOO_MANY_DEFAULTS 282
#define ERR_GENERIC_MISSING_TYPE 283
#define ERR_GENERIC_MISSING_EXPRESSION 284
#define ERR_GENERIC_NOTHING_SELECTED 285
#define ERR_THREAD_LOCAL_INVALID_STORAGE_CLASS 286
#define ERR_THREAD_LOCAL_NOT_AUTO 287
#define ERR_FUNC_NOT_THREAD_LOCAL 288
#define ERR_THREAD_LOCAL_MUST_ALWAYS_APPEAR 289
#define ERR_ATOMIC_TYPE_SPECIFIER_NO_QUALS 290
#define ERR_ATOMIC_NO_FUNCTION_OR_ARRAY 291
#define ERR_CANNOT_REDECLARE_OUTSIDE_CLASS 292
#define ERR_TYPE_DEFINITION_NOT_ALLOWED_HERE 293
#define ERR_POINTER_ARRAY_NOT_FRIENDS 294
#define ERR_DECLARATOR_NOT_ALLOWED_HERE 295
#define ERR_THIS_MEMBER_FUNC 296
#define ERR_INVALID_AS_OPERATOR 297
#define ERR_OPERATOR_MUST_BE_FUNCTION 298
#define ERR_OPERATOR_NEEDS_NO_PARAMETERS 299
#define ERR_OPERATOR_NEEDS_ONE_PARAMETER 300
#define ERR_OPERATOR_NEEDS_ZERO_OR_ONE_PARAMETER 301
#define ERR_OPERATOR_NEEDS_PARAMETER_OF_TYPE_INT 302
#define ERR_OPERATOR_NONSTATIC 303
#define ERR_OPERATOR_NEEDS_A_CLASS_OR_ENUMERATION_PARAMETER 304
#define ERR_OPERATOR_NEEDS_TWO_PARAMETERS 305
#define ERR_OPERATOR_NEEDS_ONE_OR_TWO_PARAMETER 306
#define ERR_OPERATOR_NEEDS_SECOND_PARAMETER_OF_TYPE_INT 307
#define ERR_OPERATOR_MUST_BE_NONSTATIC 308
#define ERR_OPERATOR_RETURN_REFERENCE_OR_POINTER 309
#define ERR_CANNOT_CREATE_INSTANCE_ABSTRACT 310
#define ERR_ABSTRACT_BECAUSE 311
#define ERR_OPERATOR_LITERAL_EMPTY_STRING 312
#define ERR_OPERATOR_LITERAL_NEEDS_ID 313
#define ERR_OPERATOR_LITERAL_NAMESPACE_SCOPE 314
#define ERR_OPERATOR_LITERAL_INVALID_PARAMETER_LIST 315
#define ERR_COULD_NOT_FIND_A_MATCH_FOR_LITERAL_SUFFIX 316
#define ERR_LITERAL_SUFFIX_MISMATCH 317
#define ERR_STRUCT_NOT_DEFINED 318
#define ERR_CANNOT_USE_DESTRUCTOR_HERE 319
#define ERR_CONSTRUCTOR_OR_DESTRUCTOR_MUST_BE_FUNCTION 320
#define ERR_DEFAULT_ONLY_SPECIAL_FUNCTION 321
#define ERR_CONSTRUCTOR_MUST_HAVE_BODY 322
#define ERR_CONSTRUCTOR_OR_DESTRUCTOR_NO_CONST_VOLATILE 323
#define ERR_INITIALIZER_LIST_REQUIRES_CONSTRUCTOR 324
#define ERR_CONSTRUCTOR_OR_DESTRUCTOR_NO_TYPE 325
#define ERR_CANNOT_TAKE_ADDRESS_OF_CONSTRUCTOR_OR_DESTRUCTOR 326
#define ERR_POINTER_TYPE_EXPECTED 327
#define ERR_STRUCTURE_INITIALIZATION_NEEDS_CONSTRUCTOR 328
#define ERR_MEMBER_NAME_REQUIRED 329
#define ERR_MEMBER_INITIALIZATION_REQUIRED 330
#define ERR_NOT_A_MEMBER_OR_BASE_CLASS 331
#define ERR_NEED_NONSTATIC_MEMBER 332
#define ERR_NO_APPROPRIATE_CONSTRUCTOR 333
#define ERR_NO_COPY_CONSTRUCTOR 334
#define ERR_NO_DEFAULT_CONSTRUCTOR 335
#define ERR_MEMBER_NAME_EXPECTED_NOT_DEFINED 336
#define ERR_DESTRUCTOR_CANNOT_HAVE_PARAMETERS 337
#define ERR_REF_MEMBER_MUST_INITIALIZE 338
#define ERR_CONSTANT_MEMBER_MUST_BE_INITIALIZED 339
#define ERR_IMPROPER_USE_OF_TYPEDEF 340
#define ERR_TYPE_OF_RETURN_IS_IMPLICIT_FOR_OPERATOR_FUNC 341
#define ERR_INVALID_PSUEDO_DESTRUCTOR 342
#define ERR_DESTRUCTOR_MUST_MATCH_CLASS 343
#define ERR_MUST_CALL_OR_TAKE_ADDRESS_OF_MEMBER_FUNCTION 344
#define ERR_NEED_NUMERIC_EXPRESSION 345
#define ERR_IDENTIFIER_CANNOT_HAVE_TYPE_QUALIFIER 346
#define ERR_LAMBDA_CANNOT_CAPTURE 347
#define ERR_INVALID_LAMBDA_CAPTURE_MODE 348
#define ERR_CAPTURE_ITEM_LISTED_MULTIPLE_TIMES 349
#define ERR_EXPLICIT_CAPTURE_BLOCKED 350
#define ERR_IMPLICIT_CAPTURE_BLOCKED 351
#define ERR_CANNOT_DEFAULT_PARAMETERS_WITH_LAMBDA 352
#define ERR_CANNOT_CAPTURE_THIS 353
#define ERR_MUST_CAPTURE_AUTO_VARIABLE 354
#define ERR_LAMBDA_FUNCTION_BODY_EXPECTED 355
#define ERR_MISMATCHED_FORRANGE_BEGIN_END_TYPES 356
#define ERR_MISSING_FORRANGE_BEGIN_END 357
#define ERR_MISSING_OPERATOR_PLUSPLUS_FORRANGE_ITERATOR 358
#define ERR_MISSING_OPERATOR_STAR_FORRANGE_ITERATOR 359
#define ERR_MISSING_OPERATOR_EQ_FORRANGE_ITERATOR 360
#define ERR_OPERATOR_STAR_FORRANGE_WRONG_TYPE 361
#define ERR_FORRANGE_REQUIRES_STRUCT_OR_ARRAY 362
#define ERR_FORRANGE_ARRAY_UNSIZED 363
#define ERR_FORRANGE_DECLARATOR_NO_INIT 364
#define ERR_FOR_DECLARATOR_MUST_INITIALIZE 365
#define ERR_INIT_NARROWING 366
#define ERR_NONSTRUCTURED_INIT_LIST 367
#define ERR_CANNOT_USE_INIT_LIST 368
#define ERR_CANNOT_USE_INIT_LIST_WITH_BUILTIN_BRACKET 369
#define ERR_CANNOT_USE_ARRAY_OF_STRUCTURES_AS_FUNC_ARG 370
#define ERR_ANONYMOUS_UNION_NO_FUNCTION_OR_TYPE 371
#define ERR_ANONYMOUS_UNION_PUBLIC_MEMBERS 372
#define ERR_ANONYMOUS_UNION_NONSTATIC_MEMBERS 373
#define ERR_GOTO_BYPASSES_INITIALIZATION 374
#define ERR_EXPECTED_TRY_BLOCK 375
#define ERR_EXPECTED_CATCH_CLAUSE 376
#define ERR_EXPECTED_CATCH_BLOCK 377
#define ERR_NO_MORE_CATCH_CLAUSES_ALLOWED 378
#define ERR_CATCH_WITHOUT_TRY 379
#define ERR_CONSTRUCTOR_HAS_RETURN 380
#define ERR_GOTO_INTO_TRY_OR_CATCH_BLOCK 381
#define ERR_EXCEPTION_SPECIFIER_AT_LEAST_AS_RESTRICTIVE 382
#define ERR_EXCEPTION_SPECIFIER_MUST_MATCH 383
#define ERR_NEED_TYPEINFO_H 384
#define ERR_MULTIPLE_RETURN_TYPES_SPECIFIED 385
#define ERR_NO_ATTRIBUTE_SPECIFIERS_HERE 386
#define ERR_NO_ATTRIBUTE_ARGUMENT_CLAUSE_HERE 387
#define ERR_EXPLICIT_CONSTRUCTOR_OR_CONVERSION_FUNCTION 388
#define ERR_IMPLICIT_USE_OF_EXPLICIT_CONVERSION 389
#define ERR_NOT_DEFINED_WITH_VIRTUAL_FUNCS 390
#define ERR_TEMPLATE_NO_LOCAL_CLASS 391
#define ERR_TEMPLATE_GLOBAL_OR_CLASS_SCOPE 392
#define ERR_CANNOT_USE_DEFAULT_WITH_PACKED_TEMPLATE_PARAMETER 393
#define ERR_CLASS_TEMPLATE_PARAMETER_MISSING_DEFAULT 394
#define ERR_CLASS_TEMPLATE_DEFAULT_MUST_REFER_TO_TYPE 395
#define ERR_TEMPLATE_TEMPLATE_PARAMETER_MISSING_DEFAULT 396
#define ERR_NONTYPE_TEMPLATE_PARAMETER_INVALID_TYPE 397
#define ERR_TYPE_NONTYPE_TEMPLATE_PARAMETER_DEFAULT_TYPE_MISMATCH 398
#define ERR_NOT_A_TEMPLATE 399
#define ERR_IS_ALREADY_DEFINED_AS_A_TEMPLATE 400
#define ERR_TEMPLATE_DEFINITION_MISMATCH 401
#define ERR_MISSING_DEFAULT_VALUES_IN_TEMPLATE_DECLARATION 402
#define ERR_MULTIPLE_DEFAULT_VALUES_IN_TEMPLATE_DECLARATION 403
#define ERR_TEMPLATE_TEMPLATE_PARAMETER_MUST_NAME_CLASS 404
#define ERR_TEMPLATES_MUST_BE_CLASSES_OR_FUNCTIONS 405
#define ERR_FUNCTION_TEMPLATE_NO_PARTIAL_SPECIALIZE 406
#define ERR_PARTIAL_SPECIALIZATION_MISSING_TEMPLATE_PARAMETERS 407
#define ERR_SPECIALIZATION_REQUIRES_PRIMARY 408
#define ERR_TOO_FEW_ARGS_PASSED_TO_TEMPLATE 409
#define ERR_TOO_MANY_ARGS_PASSED_TO_TEMPLATE 410
#define ERR_INCORRECT_ARGS_PASSED_TO_TEMPLATE 411
#define ERR_TEMPLATE_CANT_INSTANTIATE_NOT_DEFINED 412
#define ERR_NO_TEMPLATE_MATCHES 413
#define ERR_NEED_SPECIALIZATION_PARAMETERS 414
#define ERR_INVALID_TEMPLATE_PARAMETER 415
#define ERR_BODY_ALREADY_DEFINED_FOR_FUNCTION 416
#define ERR_INVALID_EXPLICIT_SPECIALIZATION 417
#define ERR_EXTERN_NOT_ALLOWED 418
#define ERR_TEMPLATE_ALREADY_INSTANTIATED 419
#define ERR_USE_DOT_OR_POINTSTO_TO_CALL 420
#define ERR_TEMPLATE_ARGUMENT_MUST_BE_CONSTANT 421
#define ERR_PACK_SPECIFIER_NOT_ALLOWED_HERE 422
#define ERR_PACK_SPECIFIER_REQUIRES_PACKED_TEMPLATE_PARAMETER 423
#define ERR_PACK_SPECIFIER_REQUIRES_PACKED_FUNCTION_PARAMETER 424
#define ERR_PACK_SPECIFIER_MUST_BE_USED_IN_PARAMETER 425
#define ERR_PACK_SPECIFIER_MUST_BE_USED_IN_ARGUMENT 426
#define ERR_SIZEOFELLIPSE_NEEDS_TEMPLATE_PACK 427
#define ERR_PACK_SPECIFIERS_SIZE_MISMATCH 428
#define ERR_NEED_PACKED_TEMPLATE_OF_TYPE_CLASS 429
#define ERR_STRUCTURED_TYPE_EXPECTED_IN_PACKED_TEMPLATE_PARAMETER 430
#define ERR_STRUCTURED_TYPE_EXPECTED_IN_TEMPLATE_PARAMETER 431
#define ERR_PACK_SPECIFIER_REQUIRED_HERE 432
#define ERR_CLASS_TEMPLATE_PARAMETER_EXPECTED 433
#define ERR_CLASS_TYPE_EXPECTED 434
#define ERR_PACKED_TEMPLATE_PARAMETER_NOT_ALLOWED_HERE 435
#define ERR_TEMPLATE_INSTANTIATION_STARTED_IN 436
#define ERR_IMPROPER_USE_OF_TYPE 437
#define ERR_REQUIRES_TEMPLATE_HEADER 438
#define ERR_MUTABLE_NON_CONST 439
#define ERR_DEPENDENT_TYPE_NOT_A_CLASS_OR_STRUCT 440
#define ERR_DEPENDENT_TYPE_DOES_NOT_EXIST_IN_TYPE 441
#define ERR_CONSTRUCTOR_NOT_ALLOWED 442
#define ERR_CONST_CLASS_NO_CONSTRUCTORS 443
#define ERR_DELETE_OF_POINTER_TO_UNDEFINED_TYPE 444
#define ERR_ARITHMETIC_WITH_VOID_STAR 445
#define ERR_OVERLOADED_FUNCTION_AMBIGUOUS 446
#define ERR_NEED_INITIALIZER_LIST_H 447
#define ERR_NO_IMPLICIT_MEMBER_FUNCTION_ADDRESS 448
#define ERR_CANNOT_INITIALIZE_STATIC_MEMBER_IN_CLASS 449
#define ERR_NEED_PACKED_TEMPLATE_PARAMETER 450
#define ERR_MISMATCHED_INFERRED_LAMBDA_TYPES 451
#define ERR_EXCEPTION_SPECIFIER_BLOCKS_EXCEPTIONS 452
#define ERR_EXCEPTION_SPECIFIER_BLOCKS_THROW 453
#define ERR_UNDEFINED_EXTERNAL 454
#define ERR_DELEGATING_CONSTRUCTOR_ONLY_INITIALIZER 455
#define ERR_PACKED_TEMPLATE_TYPE_MISMATCH 456
#define ERR_NEW_NO_ALLOCATE_REFERENCE 457
#define ERR_NEED_IMPORTED_NAMESPACE 458
#define ERR_MANAGED_OBJECT_NO_ADDRESS 459
#define ERR_PROPERTY_QUALIFIER_NOT_ALLOWED_ON_FUNCTIONS 460
#define ERR_GETTER_ALREADY_EXISTS 461
#define ERR_SETTER_ALREADY_EXISTS 462
#define ERR_ONLY_SIMPLE_PROPERTIES_SUPPORTED 463
#define ERR_NO_PROPERTY_IN_FUNCTION 464
#define ERR_MUST_DECLARE_PROPERTY_GETTER 465
#define ERR_CANNOT_MODIFY_PROPERTY_WITHOUT_SETTER 466
#define ERR_CANNOT_TAKE_ADDRESS_OF_PROPERTY 467
#define ERR_ENTRYPOINT_FUNC_ONLY 468
#define ERR_RETURN_TYPE_MISMATCH_FOR_AUTO_FUNCTION 469
#define ERR_AUTO_FUNCTION_RETURN_TYPE_NOT_DEFINED 470
#define ERR_DECLTYPE_AUTO_NO_REFERENCE 471
#define ERR_CONSTEXPR_FUNC_NO_GOTO 472
#define ERR_WARNING 473
#define ERR_AUTO_NOT_ALLOWED_IN_USING_STATEMENT 474
#define ERR_AUTO_NOT_ALLOWED_IN_PARAMETER 475
#define ERR_AUTO_NOT_ALLOWED_IN_CONVERSION_FUNCTION 476
#define ERR_ASSIGN_ONLY_MSIL_ARRAY_ELEMENTS 477
#define ERR_SEH_HANDLER_WITHOUT_TRY 478
#define ERR_EXPECTED_SEH_HANDLER 479
#define ERR_FINALLY_FAULT_APPEAR_ONLY_ONCE 480
#define ERR_UNDEFINED_STATIC_FUNCTION 481
#define ERR_UNDEFINED_IDENTIFIER_EXPECTING_TYPE 482
#define ERR_CANNOT_DEDUCE_AUTO_TYPE 483
#define ERR_DECLSPEC_MEMBER_OF_DECLSPEC_CLASS_NOT_ALLOWED 484
#define ERR_ATTEMPING_TO_REDEFINE_DLL_LINKAGE 485
#define ERR_IGNORING__ATTRIBUTE 486
#define ERR_IGNORING__DECLSPEC 487
#define ERR_INVALID_ALIGNMENT 488
#define ERR_INVALID_CHARACTER_STRING_CONVERSION 489
#define ERR_FUNCTION_CALL_NEEDS_ARGUMENT_LIST 490
#define ERR_REF_RETURN_TEMPORARY 491
#define ERR_CONFLICTS_WITH 492
#define ERR_EXPECTED_END_OF_TEMPLATE_ARGUMENTS_NEAR_UNDEFINED_TYPE 493
#define ERR_EXPECTED_TYPE_NEED_TYPENAME 494
#define ERR_MINIMUM_ALIGN_NOT_ACHIEVED 495
#define ERR_INVALID_VECTOR_SIZE 496
#define ERR_INVALID_VECTOR_TYPE 497
#define ERR_INVALID_ATTRIBUTE_COPY 498
#define ERR_INVALID_ATTRIBUTE_CLEANUP 499
#define ERR_NULL_TERMINATED_STRING_REQUIRED 500
#define ERR_ATTRIBUTE_NAMESPACE_NOT_ATTRIBUTE 501
#define ERR_ATTRIBUTE_DOES_NOT_EXIST 502
#define ERR_ATTRIBUTE_DOES_NOT_EXIST_IN_NAMESPACE 503
#define ERR_STATIC_FUNCTION_USED_BUT_NOT_DEFINED 504

void diag(const char* fmt, ...);

namespace Parser 
{
    enum _vlaTypes
    {
        v_label,
        v_goto,
        v_return,
        v_branch,
        v_vla,
        v_declare,
        v_blockstart,
        v_blockend
    };
    typedef struct vlaShim
    {
        struct vlaShim *next, *lower;
        struct vlaShim* fwd;
        struct vlaShim* parent;
        Optimizer::LIST* backs;
        enum _vlaTypes type;
        STATEMENT* stmt;
        int level;
        int blocknum;
        int blockindex;
        int label;
        int line;
        int checkme : 1;
        int mark : 1;
        const char* file;
    } VLASHIM;

    extern int diagcount;
    extern int currentErrorLine;
    extern SYMBOL* theCurrentFunc;
    extern enum e_kw skim_end[];
    extern enum e_kw skim_closepa[];
    extern enum e_kw skim_semi[];
    extern enum e_kw skim_semi_declare[];
    extern enum e_kw skim_closebr[];
    extern enum e_kw skim_comma[];
    extern enum e_kw skim_colon[];
    extern enum e_kw skim_templateend[];

    void DisableWarning(int num);
    void EnableWarning(int num);
    void WarningOnlyOnce(int num);
    void WarningAsError(int num);
    void AllWarningsAsError(void);
    void AllWarningsDisable(void);
    void PushWarnings(void);
    void PopWarnings(void);
    void DisableTrivialWarnings(void);
    int TotalErrors(void);
    void errorinit(void);
    bool printerrinternal(int err, const char* file, int line, va_list args);
    int printerr(int err, const char* file, int line, ...);
    void pperror(int err, int data);
    void pperrorstr(int err, const char* str);
    void preverror(int err, const char* name, const char* origFile, int origLine);
    void preverrorsym(int err, SYMBOL* sp, const char* origFile, int origLine);
    void errorat(int err, const char* name, const char* file, int line);
    void errorcurrent(int err);
    void getns(char* buf, SYMBOL* nssym);
    void getcls(char* buf, SYMBOL* clssym);
    void errorqualified(int err, SYMBOL* strSym, NAMESPACEVALUELIST* nsv, const char* name);
    void errorNotMember(SYMBOL* strSym, NAMESPACEVALUELIST* nsv, const char* name);
    void error(int err);
    void errorint(int err, int val);
    void errorstr(int err, const char* val);
    void errorstr2(int err, const char* val, const char* two);
    void errorsym(int err, SYMBOL* sym);
    void errorsym(int err, SYMBOL* sym, int line, const char* file);
    void errorsym2(int err, SYMBOL* sym1, SYMBOL* sym2);
    void errorstrsym(int err, const char* name, SYMBOL* sym2);
    void errorstringtype(int err, char* str, TYPE* tp1);
    void errortype(int err, TYPE* tp1, TYPE* tp2);
    void errorabstract(int error, SYMBOL* sp);
    void errorarg(int err, int argnum, SYMBOL* declsp, SYMBOL* funcsp);
    void errskim(LEXEME** lex, enum e_kw* skimlist);
    void skip(LEXEME** lex, enum e_kw kw);
    bool needkw(LEXEME** lex, enum e_kw kw);
    void specerror(int err, const char* name, const char* file, int line);
    void unmarkGotos(VLASHIM* shim);
    void checkGotoPastVLA(STATEMENT* stmt, bool first);
    void checkUnlabeledReferences(BLOCKDATA* block);
    void checkUnused(HASHTABLE* syms);
    void findUnusedStatics(NAMESPACEVALUELIST* nameSpace);
    void assignmentUsages(EXPRESSION* node, bool first);
    void checkDefaultArguments(SYMBOL* spi);
}