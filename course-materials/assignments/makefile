%.pdf: src/%.tex
	mkdir -p objs
	cd objs ; pdflatex ../$<
	mkdir -p ../../$*
	cp objs/$@ ../../$*/$@
	evince ../../$*/$@

all:
	mkdir -p objs
	cd objs ; pdflatex ../src/topic01.tex
	cp objs/topic01.pdf pdfs/
	evince pdfs/topic01.pdf

lab00: lab00.pdf
lab01: lab01.pdf
lab02: lab02.pdf
lab03: lab03.pdf
lab04: lab04.pdf
lab05: lab05.pdf
lab06: lab06.pdf
lab07: lab07.pdf
lab08: lab08.pdf
lab09: lab09.pdf
lab10: lab10.pdf
lab11: lab11.pdf
lab12: lab12.pdf
lab13: lab13.pdf
lab14: lab14.pdf
lab15: lab15.pdf
lab16: lab16.pdf
lab17: lab17.pdf

req: requirements.pdf
design: design.pdf
impl: impl.pdf

clean:
	rm -rf objs
