# src/pl/tcl/nls.mk
CATALOG_NAME     = pltcl
AVAIL_LANGUAGES  = de es fr it ko pl ru sv
GETTEXT_FILES    = pltcl.c
GETTEXT_TRIGGERS = $(BACKEND_COMMON_GETTEXT_TRIGGERS)
GETTEXT_FLAGS    = $(BACKEND_COMMON_GETTEXT_FLAGS)