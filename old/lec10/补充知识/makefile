# filename=算术运算符
# filename=关系运算符与逻辑运算符
# filename=C与C++中的逗号
# filename=位运算符
filename=优先级与结合性
pdf:
	pdflatex ${filename}
	bibtex ${filename}||true
	pdflatex ${filename}
	pdflatex ${filename}

r:
	mupdf-x11 ${filename}.pdf &

aread:
	acroread ${filename}.pdf &

clean:
	rm -f ${filename}.ps ${filename}.pdf ${filename}.log ${filename}.aux ${filename}.out ${filename}.dvi ${filename}.bbl ${filename}.blg
