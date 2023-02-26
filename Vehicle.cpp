#include <string>

class Vehicle {
private:
  std::string make;
  std::string model;
  std::string registrationNumber;
  std::string colour;
  double price;
  bool availability;
  std::string returnDate;

public:
  Vehicle(std::string make, std::string model,
	  std::string registrationNumber, std::string colour,
	  double price, bool availability, std::string returnDate)
    : make(make), model(model), registrationNumber(registrationNumber),
      colour(colour), price(price), availability(availability),
      returnDate(returnDate){}

  std::string getMake() {
    return make;
  }
  std::string getModel() {
    return model;
  }
  std::string getRegistrationNumber() {
    return registrationNumber;
  }
  std::string getColour() {
    return colour;
  }
  double getPrice() {
    return price;
  }
  bool getAvailability() {
    return availability;
  }

  std::string getReturnDate() {
    return returnDate;
  }

  void setAvailability(bool availability) {
    this->availability = availability;
  }

  void setRAvailabilityreturnDate(bool returnDate) {
    this->returnDate = returnDate;
  }

  virtual void display(){
    std::cout << "Make: " << make << std::endl;
    std::cout << "Model: " << model << std::endl;
    std::cout << "Registration Number: " << registrationNumber << std::endl;
    std::cout << "Colour: " << colour << std::endl;
    std::cout << "Price: " << price << std::endl;
    std::cout << "Availability: " << availability << std::endl;
    std::cout << "Return Date: " << returnDate << std::endl;
  }
  
};
