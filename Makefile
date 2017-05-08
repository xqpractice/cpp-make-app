SDIR := src
ODIR := obj
BDIR := bin

IDIR := include
LIBS := -Llib -lMakeLib

CC := g++
CP := g++
CFLAGS := -g -Wall -I$(IDIR)
PFLAGS := -g -Wall
TARGET := app

SRCS := $(wildcard $(SDIR)/*.cpp $(SDIR)/*/*.cpp $(SDIR)/*/**/*.cpp $(SDIR)/*/**/**/*.cpp)
OBJS := $(patsubst %.cpp, $(ODIR)/%.o, $(SRCS))

all: clean $(TARGET)

$(ODIR)/%.o: %.cpp
	mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -o $@ -c $<

$(TARGET): $(OBJS)
	mkdir -p $(BDIR)
	$(CP) $(PFLAGS) $(LIBS) -o $(BDIR)/$@ $^

clean:
	rm -rf $(BDIR) $(ODIR)
