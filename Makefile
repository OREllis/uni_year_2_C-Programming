TOPTARGETS := all clean

SUBDIRS := $(wildcard ./week1/* ./week2/*)

$(TOPTARGETS): $(SUBDIRS)
$(SUBDIRS):
	$(MAKE) -C $@ $(MAKECMDGOALS)

.PHONY: $(TOPTARGETS) $(SUBDIRS)
