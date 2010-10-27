# This makefile generate by Month
# Phone bill generator

SUBDIR = Oct

#-------------------Don't touch things below this line-------------#
#-------------------Unless you know what you're doing :-)----------#
clean all: $(SUBDIR)

$(SUBDIRS):
	$(MAKE) -C $@ $(MAKECMDGOALS)

.PHONY: $(SUBDIRS)