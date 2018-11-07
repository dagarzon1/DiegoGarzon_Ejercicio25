sample.pdf:sample.dat
	python sample.py 100000 1 1 
	rm sample.dat
sample.dat:sample
	./sample 100000 1 1 > sample.dat
	rm sample
sample:
	c++ sample.c -o sample
clean:
	rm sample.pdf
	rm sample
	rm sample.dat
