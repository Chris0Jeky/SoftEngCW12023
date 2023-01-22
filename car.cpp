class Car : public Vehicle {
private:
    double engineSize;
    int numSeats;
    int numDoors;

public:
    // constructor
    Car(std::string make, std::string model, std::string registrationNumber,
	std::string colour, double price, bool availability,
	std::string returnDate, double engineSize,
	int numSeats, int numDoors)
        : Vehicle(make, model, registrationNumber, colour, price, availability, returnDate),
	  engineSize(engineSize), numSeats(numSeats), numDoors(numDoors) {}

    // getters
    double getEngineSize() { return engineSize; }
    int getNumSeats() { return numSeats; }
    int getNumDoors() { return numDoors; }

  void display() override {
    std::cout << "Car Information: " << std::endl;
    Vehicle::display();
    std::cout << "Engine Size: " << engineSize << std::endl;
    std::cout << "Number of Seats: " << numSeats << std::endl;
    std::cout << "Number of Doors: " << numDoors << std::endl;
  }
};

