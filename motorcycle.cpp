class Motorcycle : public Vehicle {
private:
    int engineSize;
    bool passengerSeat;
    bool luggageSpace;

public:
    // constructor
    Motorcycle(std::string make, std::string model, std::string registrationNumber,
	       std::string colour, double price, bool availability, std::string returnDate,
	       int engineSize, bool passengerSeat, bool luggageSpace)
        : Vehicle(make, model, registrationNumber, colour, price, availability, returnDate),
	  engineSize(engineSize), passengerSeat(passengerSeat), luggageSpace(luggageSpace) {}

    // getters
    int getEngineSize() {
      return engineSize;
    }
    bool hasPassengerSeat() {
      return passengerSeat;
    }
    bool hasLuggageSpace() {
      return luggageSpace;
    }

  void display() override {
    std::cout << "Motorcycle Information: " << std::endl;
    Vehicle::display();
    std::cout << "Engine Size: " << engineSize << std::endl;
    std::cout << "Has passenger seat: " << passengerSeat << std::endl;
    std::cout << "Has luggage space: " << luggageSpace << std::endl;
  }
};
