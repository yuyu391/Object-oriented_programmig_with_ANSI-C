# Makefile for GNUmake, \LaTeX{} -> pdf.

TEX = xelatex  -quiet -interaction=nonstopmode
MKIDX = makeindex

# Use Make to submit source files maybe NOT good enough.

TYPE = book
TARGET = $(TYPE).pdf

all:$(TARGET)

$(TARGET):%.pdf:%.tex
	$(TEX) $<
	$(MKIDX) $<

# Re-run for hyperlinks, indexs and so on.

.PHONY: all clean test

clean:
	-$(RM) $(TYPE).pdf
	-$(RM) $(TYPE).log	
	-$(RM) *.aux
	-$(RM) *.log
	-$(RM) *.idx
	-$(RM) *.ilg
	-$(RM) *.ind
	-$(RM) *.out
	
test:
	-@echo $(TYPE)
	-@echo $(TARGET)
