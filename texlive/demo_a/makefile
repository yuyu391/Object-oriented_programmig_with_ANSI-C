# Makefile for GNUmake, \LaTeX{} -> pdf.

TEX = xelatex # -quiet -interaction=nonstopmode
MKIDX = makeindex

# Use Make to submit source files maybe NOT good enough.

SrcFiles=$(wildcard *.tex)
DestFiles=$(patsubst %.tex,%,$(SrcFiles))
TARGET=$(patsubst %.tex,%.pdf,$(SrcFiles))

all:$(TARGET)

$(TARGET):%.pdf:%.tex
	$(TEX) $<
	$(MKIDX) $<

# Re-run for hyperlinks, indexs and so on.

.PHONY: all clean

clean:
	-$(RM) $(TARGET)