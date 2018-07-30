LDFLAGS =
CFLAGS =

# LDFLAGS += $(shell pkg-config --libs )
# CFLAGS += $(shell pkg-config --cflags )

edit: main.o
	g++ -o hello main.o $(LDFLAGS)

main.o: main.cpp lib/hello.cpp lib/translator.cpp
	g++ -c $(CFLAGS) main.cpp

clean:
	rm hello main.o