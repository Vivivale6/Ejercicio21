g1.png: t.txt grafica.py
	python grafica.py
t.txt: eje21
	./eje21 > t.txt
eje21: Ejercicio21.cpp
	c++ Ejercicio21.cpp -o eje21
