all:
	echo "build run"
build:
	g++ usdf.cc  main.cc -std=c++14 -o main
run:
	./main
git:
	git add . && git commit -m add . && git push 
