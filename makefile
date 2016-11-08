CC=gcc
CFLAGS=-O3 -Wall

await:
	$(CC) $(CFLAGS) await.c -o await

clean:
	rm await
