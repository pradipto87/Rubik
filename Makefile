# Variables
CXX = clang++
CXXFLAGS = -std=c++20 -stdlib=libc++ -Wall -Wextra -Wpedantic

# Targets
all: debug release

debug:
	$(CXX) $(CXXFLAGS) -g source/*.cpp -o build/rubik_debug

release:
	$(CXX) $(CXXFLAGS) -O3 source/*.cpp -o build/rubik

clean:
	rm -f build/rubik build/rubik_debug
