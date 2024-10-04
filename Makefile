# Compiler and flags
CXX := clang++
CXXFLAGS := -std=c++20 -stdlib=libc++ -Wall -Wextra -Wpedantic

# Directories
SRC_DIR := source
BUILD_DIR := build

# Output files
DEBUG_TARGET := $(BUILD_DIR)/rubik_debug
RELEASE_TARGET := $(BUILD_DIR)/rubik

# Source files
SOURCES := $(wildcard $(SRC_DIR)/*.cpp)

# Targets
.PHONY: all debug release clean

all: debug release

debug: $(DEBUG_TARGET)

release: $(RELEASE_TARGET)

$(DEBUG_TARGET): $(SOURCES)
	@mkdir -p $(BUILD_DIR)
	$(CXX) $(CXXFLAGS) -g $^ -o $@

$(RELEASE_TARGET): $(SOURCES)
	@mkdir -p $(BUILD_DIR)
	$(CXX) $(CXXFLAGS) -O3 $^ -o $@

clean:
	@echo "Cleaning up..."
	@rm -f $(DEBUG_TARGET) $(RELEASE_TARGET)
	@rmdir $(BUILD_DIR) 2>/dev/null || true
