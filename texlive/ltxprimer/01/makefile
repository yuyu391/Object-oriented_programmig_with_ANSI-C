# Makefile for GNUmake, \LaTeX{} -> pdf.

TEX = xelatex  -quiet -interaction=nonstopmode
MKIDX = makeindex

# Use Make to submit source files maybe NOT good enough.

SrcFiles=$(wildcard *.tex)
DestFiles=$(patsubst %.tex,%.pdf,$(SrcFiles))
TYPE = $(patsubst %.tex,%,$(SrcFiles))
TARGET = $(DestFiles)

all:$(TARGET)

$(TARGET):%.pdf:%.tex
	$(TEX) $<
	$(MKIDX) $<

# Re-run for hyperlinks, indexs and so on.

.PHONY: all clean test rmpdf

rmpdf:
	-$(RM) $(TYPE).pdf
	-$(RM) $(TYPE).log
	
clean:
	-$(RM) *.aux
	-$(RM) *.log
	-$(RM) *.idx
	-$(RM) *.ilg
	-$(RM) *.ind
	-$(RM) *.out
	
test:
	-@echo $(TARGET)