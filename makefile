CC=gcc
FLAGS=-Wall -g
LOOPS= basicClassification.o advancedClassificationLoop.o
RECUR= basicClassification.o advancedClassificationRecursion.o

all: loops recursives recursived loopd mains maindrec maindloop

mains: main.o libclassrec.a
	$(CC) $(FLAGS) -o mains main.o -L. -lclassrec

maindrec: main.o
	$(CC) $(FLAGS) -o maindrec main.o ./libclassrec.so

maindloop: main.o
	$(CC) $(FLAGS) -o maindloop main.o ./libclassloops.so

loops: libclassloops.a
recursives: libclassrec.a
recursived: libclassrec.so
loopd: libclassloops.so

libclassloops.a: $(LOOPS)
	ar -rcs libclassloops.a $(LOOPS)
	
libclassrec.a: $(RECUR)
	ar -rcs libclassrec.a $(RECUR)

libclassrec.so: $(RECUR)
	$(CC) -fPIC -shared -o libclassrec.so $(RECUR)

libclassloops.so: $(LOOPS)
	$(CC) -fPIC -shared -o libclassloops.so $(LOOPS)

main.o: main.c NumClass.h
	$(CC) $(FLAGS) -fPIC -c main.c

basicClassification.o: basicClassification.c NumClass.h
	$(CC) $(FLAGS) -fPIC -c basicClassification.c

advancedClassificationLoop.o: advancedClassificationLoop.c NumClass.h
	$(CC) $(FLAGS) -fPIC -c advancedClassificationLoop.c

advancedClassificationRecursion.o: advancedClassificationRecursion.c NumClass.h
	$(CC) $(FLAGS) -fPIC -c advancedClassificationRecursion.c

clean:
	rm -f *.o *.a *.so mains maindloop maindrec
