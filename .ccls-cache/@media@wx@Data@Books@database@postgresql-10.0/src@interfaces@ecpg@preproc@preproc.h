/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

#ifndef YY_BASE_YY_PREPROC_H_INCLUDED
# define YY_BASE_YY_PREPROC_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int base_yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    SQL_ALLOCATE = 258,
    SQL_AUTOCOMMIT = 259,
    SQL_BOOL = 260,
    SQL_BREAK = 261,
    SQL_CALL = 262,
    SQL_CARDINALITY = 263,
    SQL_CONNECT = 264,
    SQL_COUNT = 265,
    SQL_DATETIME_INTERVAL_CODE = 266,
    SQL_DATETIME_INTERVAL_PRECISION = 267,
    SQL_DESCRIBE = 268,
    SQL_DESCRIPTOR = 269,
    SQL_DISCONNECT = 270,
    SQL_FOUND = 271,
    SQL_FREE = 272,
    SQL_GET = 273,
    SQL_GO = 274,
    SQL_GOTO = 275,
    SQL_IDENTIFIED = 276,
    SQL_INDICATOR = 277,
    SQL_KEY_MEMBER = 278,
    SQL_LENGTH = 279,
    SQL_LONG = 280,
    SQL_NULLABLE = 281,
    SQL_OCTET_LENGTH = 282,
    SQL_OPEN = 283,
    SQL_OUTPUT = 284,
    SQL_REFERENCE = 285,
    SQL_RETURNED_LENGTH = 286,
    SQL_RETURNED_OCTET_LENGTH = 287,
    SQL_SCALE = 288,
    SQL_SECTION = 289,
    SQL_SHORT = 290,
    SQL_SIGNED = 291,
    SQL_SQLERROR = 292,
    SQL_SQLPRINT = 293,
    SQL_SQLWARNING = 294,
    SQL_START = 295,
    SQL_STOP = 296,
    SQL_STRUCT = 297,
    SQL_UNSIGNED = 298,
    SQL_VAR = 299,
    SQL_WHENEVER = 300,
    S_ADD = 301,
    S_AND = 302,
    S_ANYTHING = 303,
    S_AUTO = 304,
    S_CONST = 305,
    S_DEC = 306,
    S_DIV = 307,
    S_DOTPOINT = 308,
    S_EQUAL = 309,
    S_EXTERN = 310,
    S_INC = 311,
    S_LSHIFT = 312,
    S_MEMPOINT = 313,
    S_MEMBER = 314,
    S_MOD = 315,
    S_MUL = 316,
    S_NEQUAL = 317,
    S_OR = 318,
    S_REGISTER = 319,
    S_RSHIFT = 320,
    S_STATIC = 321,
    S_SUB = 322,
    S_VOLATILE = 323,
    S_TYPEDEF = 324,
    CSTRING = 325,
    CVARIABLE = 326,
    CPP_LINE = 327,
    IP = 328,
    DOLCONST = 329,
    ECONST = 330,
    NCONST = 331,
    UCONST = 332,
    UIDENT = 333,
    IDENT = 334,
    FCONST = 335,
    SCONST = 336,
    BCONST = 337,
    XCONST = 338,
    Op = 339,
    ICONST = 340,
    PARAM = 341,
    TYPECAST = 342,
    DOT_DOT = 343,
    COLON_EQUALS = 344,
    EQUALS_GREATER = 345,
    LESS_EQUALS = 346,
    GREATER_EQUALS = 347,
    NOT_EQUALS = 348,
    ABORT_P = 349,
    ABSOLUTE_P = 350,
    ACCESS = 351,
    ACTION = 352,
    ADD_P = 353,
    ADMIN = 354,
    AFTER = 355,
    AGGREGATE = 356,
    ALL = 357,
    ALSO = 358,
    ALTER = 359,
    ALWAYS = 360,
    ANALYSE = 361,
    ANALYZE = 362,
    AND = 363,
    ANY = 364,
    ARRAY = 365,
    AS = 366,
    ASC = 367,
    ASSERTION = 368,
    ASSIGNMENT = 369,
    ASYMMETRIC = 370,
    AT = 371,
    ATTACH = 372,
    ATTRIBUTE = 373,
    AUTHORIZATION = 374,
    BACKWARD = 375,
    BEFORE = 376,
    BEGIN_P = 377,
    BETWEEN = 378,
    BIGINT = 379,
    BINARY = 380,
    BIT = 381,
    BOOLEAN_P = 382,
    BOTH = 383,
    BY = 384,
    CACHE = 385,
    CALLED = 386,
    CASCADE = 387,
    CASCADED = 388,
    CASE = 389,
    CAST = 390,
    CATALOG_P = 391,
    CHAIN = 392,
    CHAR_P = 393,
    CHARACTER = 394,
    CHARACTERISTICS = 395,
    CHECK = 396,
    CHECKPOINT = 397,
    CLASS = 398,
    CLOSE = 399,
    CLUSTER = 400,
    COALESCE = 401,
    COLLATE = 402,
    COLLATION = 403,
    COLUMN = 404,
    COLUMNS = 405,
    COMMENT = 406,
    COMMENTS = 407,
    COMMIT = 408,
    COMMITTED = 409,
    CONCURRENTLY = 410,
    CONFIGURATION = 411,
    CONFLICT = 412,
    CONNECTION = 413,
    CONSTRAINT = 414,
    CONSTRAINTS = 415,
    CONTENT_P = 416,
    CONTINUE_P = 417,
    CONVERSION_P = 418,
    COPY = 419,
    COST = 420,
    CREATE = 421,
    CROSS = 422,
    CSV = 423,
    CUBE = 424,
    CURRENT_P = 425,
    CURRENT_CATALOG = 426,
    CURRENT_DATE = 427,
    CURRENT_ROLE = 428,
    CURRENT_SCHEMA = 429,
    CURRENT_TIME = 430,
    CURRENT_TIMESTAMP = 431,
    CURRENT_USER = 432,
    CURSOR = 433,
    CYCLE = 434,
    DATA_P = 435,
    DATABASE = 436,
    DAY_P = 437,
    DEALLOCATE = 438,
    DEC = 439,
    DECIMAL_P = 440,
    DECLARE = 441,
    DEFAULT = 442,
    DEFAULTS = 443,
    DEFERRABLE = 444,
    DEFERRED = 445,
    DEFINER = 446,
    DELETE_P = 447,
    DELIMITER = 448,
    DELIMITERS = 449,
    DEPENDS = 450,
    DESC = 451,
    DETACH = 452,
    DICTIONARY = 453,
    DISABLE_P = 454,
    DISCARD = 455,
    DISTINCT = 456,
    DO = 457,
    DOCUMENT_P = 458,
    DOMAIN_P = 459,
    DOUBLE_P = 460,
    DROP = 461,
    EACH = 462,
    ELSE = 463,
    ENABLE_P = 464,
    ENCODING = 465,
    ENCRYPTED = 466,
    END_P = 467,
    ENUM_P = 468,
    ESCAPE = 469,
    EVENT = 470,
    EXCEPT = 471,
    EXCLUDE = 472,
    EXCLUDING = 473,
    EXCLUSIVE = 474,
    EXECUTE = 475,
    EXISTS = 476,
    EXPLAIN = 477,
    EXTENSION = 478,
    EXTERNAL = 479,
    EXTRACT = 480,
    FALSE_P = 481,
    FAMILY = 482,
    FETCH = 483,
    FILTER = 484,
    FIRST_P = 485,
    FLOAT_P = 486,
    FOLLOWING = 487,
    FOR = 488,
    FORCE = 489,
    FOREIGN = 490,
    FORWARD = 491,
    FREEZE = 492,
    FROM = 493,
    FULL = 494,
    FUNCTION = 495,
    FUNCTIONS = 496,
    GENERATED = 497,
    GLOBAL = 498,
    GRANT = 499,
    GRANTED = 500,
    GREATEST = 501,
    GROUP_P = 502,
    GROUPING = 503,
    HANDLER = 504,
    HAVING = 505,
    HEADER_P = 506,
    HOLD = 507,
    HOUR_P = 508,
    IDENTITY_P = 509,
    IF_P = 510,
    ILIKE = 511,
    IMMEDIATE = 512,
    IMMUTABLE = 513,
    IMPLICIT_P = 514,
    IMPORT_P = 515,
    IN_P = 516,
    INCLUDING = 517,
    INCREMENT = 518,
    INDEX = 519,
    INDEXES = 520,
    INHERIT = 521,
    INHERITS = 522,
    INITIALLY = 523,
    INLINE_P = 524,
    INNER_P = 525,
    INOUT = 526,
    INPUT_P = 527,
    INSENSITIVE = 528,
    INSERT = 529,
    INSTEAD = 530,
    INT_P = 531,
    INTEGER = 532,
    INTERSECT = 533,
    INTERVAL = 534,
    INTO = 535,
    INVOKER = 536,
    IS = 537,
    ISNULL = 538,
    ISOLATION = 539,
    JOIN = 540,
    KEY = 541,
    LABEL = 542,
    LANGUAGE = 543,
    LARGE_P = 544,
    LAST_P = 545,
    LATERAL_P = 546,
    LEADING = 547,
    LEAKPROOF = 548,
    LEAST = 549,
    LEFT = 550,
    LEVEL = 551,
    LIKE = 552,
    LIMIT = 553,
    LISTEN = 554,
    LOAD = 555,
    LOCAL = 556,
    LOCALTIME = 557,
    LOCALTIMESTAMP = 558,
    LOCATION = 559,
    LOCK_P = 560,
    LOCKED = 561,
    LOGGED = 562,
    MAPPING = 563,
    MATCH = 564,
    MATERIALIZED = 565,
    MAXVALUE = 566,
    METHOD = 567,
    MINUTE_P = 568,
    MINVALUE = 569,
    MODE = 570,
    MONTH_P = 571,
    MOVE = 572,
    NAME_P = 573,
    NAMES = 574,
    NATIONAL = 575,
    NATURAL = 576,
    NCHAR = 577,
    NEW = 578,
    NEXT = 579,
    NO = 580,
    NONE = 581,
    NOT = 582,
    NOTHING = 583,
    NOTIFY = 584,
    NOTNULL = 585,
    NOWAIT = 586,
    NULL_P = 587,
    NULLIF = 588,
    NULLS_P = 589,
    NUMERIC = 590,
    OBJECT_P = 591,
    OF = 592,
    OFF = 593,
    OFFSET = 594,
    OIDS = 595,
    OLD = 596,
    ON = 597,
    ONLY = 598,
    OPERATOR = 599,
    OPTION = 600,
    OPTIONS = 601,
    OR = 602,
    ORDER = 603,
    ORDINALITY = 604,
    OUT_P = 605,
    OUTER_P = 606,
    OVER = 607,
    OVERLAPS = 608,
    OVERLAY = 609,
    OVERRIDING = 610,
    OWNED = 611,
    OWNER = 612,
    PARALLEL = 613,
    PARSER = 614,
    PARTIAL = 615,
    PARTITION = 616,
    PASSING = 617,
    PASSWORD = 618,
    PLACING = 619,
    PLANS = 620,
    POLICY = 621,
    POSITION = 622,
    PRECEDING = 623,
    PRECISION = 624,
    PRESERVE = 625,
    PREPARE = 626,
    PREPARED = 627,
    PRIMARY = 628,
    PRIOR = 629,
    PRIVILEGES = 630,
    PROCEDURAL = 631,
    PROCEDURE = 632,
    PROGRAM = 633,
    PUBLICATION = 634,
    QUOTE = 635,
    RANGE = 636,
    READ = 637,
    REAL = 638,
    REASSIGN = 639,
    RECHECK = 640,
    RECURSIVE = 641,
    REF = 642,
    REFERENCES = 643,
    REFERENCING = 644,
    REFRESH = 645,
    REINDEX = 646,
    RELATIVE_P = 647,
    RELEASE = 648,
    RENAME = 649,
    REPEATABLE = 650,
    REPLACE = 651,
    REPLICA = 652,
    RESET = 653,
    RESTART = 654,
    RESTRICT = 655,
    RETURNING = 656,
    RETURNS = 657,
    REVOKE = 658,
    RIGHT = 659,
    ROLE = 660,
    ROLLBACK = 661,
    ROLLUP = 662,
    ROW = 663,
    ROWS = 664,
    RULE = 665,
    SAVEPOINT = 666,
    SCHEMA = 667,
    SCHEMAS = 668,
    SCROLL = 669,
    SEARCH = 670,
    SECOND_P = 671,
    SECURITY = 672,
    SELECT = 673,
    SEQUENCE = 674,
    SEQUENCES = 675,
    SERIALIZABLE = 676,
    SERVER = 677,
    SESSION = 678,
    SESSION_USER = 679,
    SET = 680,
    SETS = 681,
    SETOF = 682,
    SHARE = 683,
    SHOW = 684,
    SIMILAR = 685,
    SIMPLE = 686,
    SKIP = 687,
    SMALLINT = 688,
    SNAPSHOT = 689,
    SOME = 690,
    SQL_P = 691,
    STABLE = 692,
    STANDALONE_P = 693,
    START = 694,
    STATEMENT = 695,
    STATISTICS = 696,
    STDIN = 697,
    STDOUT = 698,
    STORAGE = 699,
    STRICT_P = 700,
    STRIP_P = 701,
    SUBSCRIPTION = 702,
    SUBSTRING = 703,
    SYMMETRIC = 704,
    SYSID = 705,
    SYSTEM_P = 706,
    TABLE = 707,
    TABLES = 708,
    TABLESAMPLE = 709,
    TABLESPACE = 710,
    TEMP = 711,
    TEMPLATE = 712,
    TEMPORARY = 713,
    TEXT_P = 714,
    THEN = 715,
    TIME = 716,
    TIMESTAMP = 717,
    TO = 718,
    TRAILING = 719,
    TRANSACTION = 720,
    TRANSFORM = 721,
    TREAT = 722,
    TRIGGER = 723,
    TRIM = 724,
    TRUE_P = 725,
    TRUNCATE = 726,
    TRUSTED = 727,
    TYPE_P = 728,
    TYPES_P = 729,
    UNBOUNDED = 730,
    UNCOMMITTED = 731,
    UNENCRYPTED = 732,
    UNION = 733,
    UNIQUE = 734,
    UNKNOWN = 735,
    UNLISTEN = 736,
    UNLOGGED = 737,
    UNTIL = 738,
    UPDATE = 739,
    USER = 740,
    USING = 741,
    VACUUM = 742,
    VALID = 743,
    VALIDATE = 744,
    VALIDATOR = 745,
    VALUE_P = 746,
    VALUES = 747,
    VARCHAR = 748,
    VARIADIC = 749,
    VARYING = 750,
    VERBOSE = 751,
    VERSION_P = 752,
    VIEW = 753,
    VIEWS = 754,
    VOLATILE = 755,
    WHEN = 756,
    WHERE = 757,
    WHITESPACE_P = 758,
    WINDOW = 759,
    WITH = 760,
    WITHIN = 761,
    WITHOUT = 762,
    WORK = 763,
    WRAPPER = 764,
    WRITE = 765,
    XML_P = 766,
    XMLATTRIBUTES = 767,
    XMLCONCAT = 768,
    XMLELEMENT = 769,
    XMLEXISTS = 770,
    XMLFOREST = 771,
    XMLNAMESPACES = 772,
    XMLPARSE = 773,
    XMLPI = 774,
    XMLROOT = 775,
    XMLSERIALIZE = 776,
    XMLTABLE = 777,
    YEAR_P = 778,
    YES_P = 779,
    ZONE = 780,
    NOT_LA = 781,
    NULLS_LA = 782,
    WITH_LA = 783,
    POSTFIXOP = 784,
    UMINUS = 785
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 581 "preproc.y"

	double	dval;
	char	*str;
	int		ival;
	struct	when		action;
	struct	index		index;
	int		tagname;
	struct	this_type	type;
	enum	ECPGttype	type_enum;
	enum	ECPGdtype	dtype_enum;
	struct	fetch_desc	descriptor;
	struct  su_symbol	struct_union;
	struct	prep		prep;

#line 603 "preproc.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


extern YYSTYPE base_yylval;
extern YYLTYPE base_yylloc;
int base_yyparse (void);

#endif /* !YY_BASE_YY_PREPROC_H_INCLUDED  */
