
SOURCES = C-basica.tex 
PDFS = $(SOURCES:.tex=.pdf)
LATEXMKFLAGS := -pdf -synctex=1 -shell-escape -interaction=nonstopmode
PWD := $(shell pwd)

.PHONY: all build docker-image docker-build clean

ifeq ($(DOCKER_BUILD),1)
BUILD_TARGET := docker-build
else
BUILD_TARGET := build
endif

all: $(BUILD_TARGET)

build: $(PDFS)

%.pdf: %.tex
	latexmk $(LATEXMKFLAGS) $<


docker-image:
	docker build ../../ -t texlive:latest

# Run build inside Docker
docker-build: docker-image
	docker run --rm \
		-v "$(PWD)":/workdir \
		--user $(shell id -u):$(shell id -g) \
		-w /workdir \
		texlive:latest \
		make build

clean:
	rm -rf *.aux *.log *.toc *.pdf *.snm *.out *.gz *.nav *.vrb _minted* *.fdb_latexmk *fls *.listing

