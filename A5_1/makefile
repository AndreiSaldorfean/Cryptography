all:
	rm -rf build
	cmake -S . -B build -G "Unix Makefiles"
b:
	cd build && make -j12
r:
	cd build && ./main
br: b r
