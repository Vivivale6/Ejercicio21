primera: g1.png
g1.png: t.txt grafica.py
	python grafica.py
t.txt: eje21
	./eje21 > t.txt
eje21: Ejercicio21.cpp
	c++ Ejercicio21.cpp -o eje21
segunda: g2.png
g2.png: t2.txt grafica2.py
	python grafica2.py
t2.txt: eje21_2
	./eje21_2 > t2.txt
eje21: Ejercicio21_2.cpp
	c++ Ejercicio21_2.cpp -o eje21_2
