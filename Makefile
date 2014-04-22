CURDIR = $(shell pwd)
INCLUDES += $(CURDIR)/headers $(CURDIR)/cppheaders $(CURDIR)/plugin

CXXFLAGS += -Wno-long-long -pedantic -Wall -ffreestanding -fno-exceptions -fno-builtin -fno-stack-protector -fno-zero-initialized-in-bss -nostdinc -U __APPLE__ -U __linux__ -D __v8sa__
CXXFLAGS += $(shell echo $(INCLUDES) | sed -e 's/\([^ ]*\)/"-I\1"/g')
export CXXFLAGS

CFLAGS += -Wall -ffreestanding -fno-builtin -fno-stack-protector -fno-zero-initialized-in-bss -nostdinc -U __APPLE__ -U __linux__ -D __v8sa__
CFLAGS += $(shell echo $(INCLUDES) | sed -e 's/\([^ ]*\)/"-I\1"/g')
export CXXFLAGS

GYP_DEFINES = debuggersupport=off OS=standalone
export GYP_DEFINES

CXX = g++
export CXX

all:
	# generate the defines and finally the CXX command to use
	echo CXX is $$CXX; \
	cd libs/v8; make x64.release debuggersupport=off profilingsupport=off

deps:
	cd libs/v8 && make dependencies && cd -

clean:
	cd libs/v8 && make clean
