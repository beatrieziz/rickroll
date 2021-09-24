.PHONY: build run clean

clean:
	rm -rf build

build: clean
	mkdir -p build
	g++ main.cpp -o build/rickroll

run: build
	build/rickroll
