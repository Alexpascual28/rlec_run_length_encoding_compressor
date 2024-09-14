CXX = g++
CXXFLAGS = -std=c++20 -Wall

SRC_DIR = src
INCLUDE_DIR = include
TEST_DIR = tests

OBJ = file_compression_system

MAINOBJ = main
TEST1OBJ = compress
TEST2OBJ = decompress

TARGET = rlec
TEST1 = test-compress
TEST2 = test-decompress

$(TARGET): $(OBJ).o $(MAINOBJ).o
	$(CXX) $(CXXFLAGS) -I$(INCLUDE_DIR) $(OBJ).o $(MAINOBJ).o -o $(TARGET)

$(TEST1): $(OBJ).o $(TEST1OBJ).o
	$(CXX) $(CXXFLAGS) -I$(INCLUDE_DIR) $(OBJ).o $(TEST1OBJ).o -o $(TEST1)

$(TEST2): $(OBJ).o $(TEST2OBJ).o
	$(CXX) $(CXXFLAGS) -I$(INCLUDE_DIR) $(OBJ).o $(TEST2OBJ).o -o $(TEST2)

$(OBJ).o: $(SRC_DIR)/$(OBJ).cpp $(INCLUDE_DIR)/$(OBJ).h
	$(CXX) $(CXXFLAGS) -c $(SRC_DIR)/$(OBJ).cpp -I$(INCLUDE_DIR)

$(MAINOBJ).o: $(SRC_DIR)/$(MAINOBJ).cpp $(INCLUDE_DIR)/$(OBJ).h
	$(CXX) $(CXXFLAGS) -c $(SRC_DIR)/$(MAINOBJ).cpp -I$(INCLUDE_DIR)

$(TEST1OBJ).o: $(TEST_DIR)/$(TEST1OBJ).cpp $(INCLUDE_DIR)/$(OBJ).h
	$(CXX) $(CXXFLAGS) -c $(TEST_DIR)/$(TEST1OBJ).cpp -I$(INCLUDE_DIR)

$(TEST2OBJ).o: $(TEST_DIR)/$(TEST2OBJ).cpp $(INCLUDE_DIR)/$(OBJ).h
	$(CXX) $(CXXFLAGS) -c $(TEST_DIR)/$(TEST2OBJ).cpp -I$(INCLUDE_DIR)

clean:
	del *.o
	del *.exe
