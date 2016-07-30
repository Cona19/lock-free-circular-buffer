CC = g++

CPPFLAGS = -O2 -Wunused-result
CPPFLAGS_DEBUG = -Wall -g

OBJS = ./src/main.cc ./src/common.cc ./src/hyu_cb.cc
SRCS = ./src/$(OBJS:.o=.cc)
BIN = ./bin/
INCLUDE = ./src
LIBNAME = -lpthread

CPPFLAGS += -I$(INCLUDE)

all: cb

cb: $(OBJS)
	$(CC) -o $(BIN)cb $(OBJS) $(CPPFLAGS) $(LIBNAME)

debug: $(OBJS)
	$(CC) -o $(BIN)cb $(OBJS) $(CPPFLAGS_DEBUG) $(LIBNAME)

clean:
	rm -rf $(OBJS)

allclean:
	rm -rf $(OBJS) $(BIN)*