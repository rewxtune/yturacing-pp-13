CXX = clang++
CXXFLAGS = -I.

main: main.cpp RoadManager.h
	@$(CXX) $(CXXFLAGS) main.cpp RoadManager.cpp -o main
	@echo "Compiled!"

clean:
	rm -f main
