# TODO (Khangaroo): Make this process a lot less hacky (no, export did not work)
# See MakefileNSO

.PHONY: all clean starlight send

BDSPVER ?= 110
BDSPVERSTR ?= 1.1.0
S2ROMTYPE ?= US

BUILDID100 ?= F87FC6075104EC4D9642A4AA6BB22216
BUILDID110 ?= EA058A067CBD6943A6CF65B4588B6098

PROJNAME ?= BDSP

all: starlight

starlight:
	$(MAKE) all -f MakefileNSO BDSPVER=$(BDSPVER) BDSPVERSTR=$(BDSPVERSTR)
	$(MAKE) starlight_patch_$(BDSPVER)/*.ips

	mkdir -p starlight_patch_$(BDSPVER)/atmosphere/exefs_patches/$(PROJNAME)/
	mkdir -p starlight_patch_$(BDSPVER)/atmosphere/contents/0100000011D90000/exefs/
	
	mv starlight_patch_$(BDSPVER)/$(BUILDID110).ips starlight_patch_$(BDSPVER)/atmosphere/exefs_patches/$(PROJNAME)/$(BUILDID110).ips
	mv $(shell basename $(CURDIR))$(BDSPVER).elf starlight_patch_$(BDSPVER)/subsdk1.elf
	mv $(shell basename $(CURDIR))$(BDSPVER).nso starlight_patch_$(BDSPVER)/atmosphere/contents/0100000011D90000/exefs/subsdk1

starlight_patch_$(BDSPVER)/*.ips: patches/*.slpatch patches/configs/$(BDSPVER).config patches/maps/$(BDSPVER)/*.map \
								build$(BDSPVER)/$(shell basename $(CURDIR))$(BDSPVER).map scripts/genPatch.py
	@rm -f starlight_patch_$(BDSPVER)/*.ips
	python3 scripts/genPatch.py $(BDSPVER)

clean:
	$(MAKE) clean -f MakefileNSO
	@rm -fr starlight_patch_*
