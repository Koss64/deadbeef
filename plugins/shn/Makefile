OUT=ddb_shn.so

CC?=gcc

CFLAGS?=-I../..
CFLAGS+=-Wall -fPIC -std=c99 -D_GNU_SOURCE -DHAVE_CONFIG_H -I.

LDFLAGS+=-module -shared -lm

SOURCES=array.c convert.c misc.c output.c seek.c shn.c shorten.c sulawalaw.c vario.c wave.c

OBJECTS=$(SOURCES:.c=.o)

all: $(SOURCES) $(OUT)

$(OUT): $(OBJECTS)
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

.c.o:
	$(CC) $(CFLAGS) $< -c -o $@

clean:
	rm $(OBJECTS) $(OUT)
