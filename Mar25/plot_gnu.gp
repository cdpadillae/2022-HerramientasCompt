set terminal pdf
set output 'sum.pdf'
plot 'datos.txt' u 1:4 w lp
