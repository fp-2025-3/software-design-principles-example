CXX = g++
CXXFLAGS = -std=c++17 -Wall

BUILD_DIR = build

all: bad_design cohesion coupling soc final

bad_design:
	$(CXX) $(CXXFLAGS) examples/00_bad_design/order_system.cpp -o $(BUILD_DIR)/bad_design

cohesion:
	$(CXX) $(CXXFLAGS) \
	examples/01_cohesion/main.cpp \
	examples/01_cohesion/Order.cpp \
	-o $(BUILD_DIR)/cohesion

coupling:
	$(CXX) $(CXXFLAGS) \
	examples/02_coupling/main.cpp \
	examples/02_coupling/Order.cpp \
	examples/02_coupling/OrderCalculator.cpp \
	examples/02_coupling/OrderPrinter.cpp \
	-o $(BUILD_DIR)/coupling

soc:
	$(CXX) $(CXXFLAGS) \
	examples/03_separation_of_concerns/main.cpp \
	examples/03_separation_of_concerns/model/Order.cpp \
	examples/03_separation_of_concerns/services/OrderCalculator.cpp \
	examples/03_separation_of_concerns/presentation/OrderPrinter.cpp \
	examples/03_separation_of_concerns/infrastructure/OrderRepository.cpp \
	-o $(BUILD_DIR)/soc

final:
	$(CXX) $(CXXFLAGS) \
	examples/04_final_design/main.cpp \
	examples/04_final_design/model/Order.cpp \
	examples/04_final_design/services/OrderCalculator.cpp \
	examples/04_final_design/application/OrderService.cpp \
	examples/04_final_design/presentation/OrderPrinter.cpp \
	examples/04_final_design/infrastructure/OrderRepository.cpp \
	-o $(BUILD_DIR)/final

clean:
	rm -rf $(BUILD_DIR)/*