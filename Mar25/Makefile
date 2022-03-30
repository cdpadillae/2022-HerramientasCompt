fig.pdf: datos.txt plot_gnu.gp
	gnuplot plot_gnu.gp
harmonic-series.x : harmonic-series.cpp
	g++ harmonic-series.cpp -o harmonic.x
datos.txt: harmonic.x
	./harmonic.x > datos.txt


