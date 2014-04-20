CURDIR = $(shell pwd)
INCLUDES += $(CURDIR)/headers $(CURDIR)/cppheaders $(CURDIR)/plugin
CCFLAGS += -Wall -ffreestanding -fno-exceptions -fno-builtin -fno-stack-protector -fno-zero-initialized-in-bss -nostdinc -U __APPLE__ -U __linux__ -D __v8sa__
CCFLAGS += $(shell echo $(INCLUDES) | sed -e 's/\([^ ]*\)/"-I\1"/g')

all:
	# generate the defines and finally the CXX command to use
	export GYP_DEFINES=-Ddebuggersupport=off; \
	export CXX=g++\ '$(CCFLAGS)'; \
	echo CXX is $$CXX;\
	cd libs/v8; make x64.release

deps:
	cd libs/v8 && make dependencies && cd -

clean:
	cd v8 && make clean
