class Van : public Vehicle {
private:
    double engineSize;
    int numSeats;
    bool luggageSpace;

public:
    // constructor
    Van(std::string make, std::string model, std::string registrationNumber,
	std::string colour, double price, bool availability, std::string returnDate,
	double engineSize, int numSeats, bool luggageSpace)
        : Vehicle(make, model, registrationNumber, colour, price, availability, returnDate),
	  engineSize(engineSize), numSeats(numSeats), luggageSpace(luggageSpace) {}

    // getters
    double getEngineSize() {
      return engineSize;
    }
    int getNumSeats() {
      return numSeats;
    }
    int getLuggageSpace() {
      return luggageSpace;
    }

  void display() override {
    std::cout << "Van Information: " << std::endl;
    Vehicle::display();
    std::cout << "Engine Size: " << engineSize << std::endl;
    std::cout << "Number of Seats: " << numSeats << std::endl;
    std::cout << "Luggage space: " << luggageSpace << std::endl;
  }
};
