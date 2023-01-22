#include <fstream>
#include <vector>
#include <sstream>

#include <iostream>
#include "Vehicle.cpp"
#include "car.cpp"
#include "motorcycle.cpp"
#include "van.cpp"
#include "VehicleManager.cpp"

int main() {
  Car myCar("BMW", "M5", "AB123CD", "black", 75.0, true, "", 4.4, 5, 4);
  Motorcycle myMot("BMW", "M5", "AB123CD", "black", 75.0, true, "", 4.4, 5, 4);
  Van myVan ("BMW", "M5", "AB123CD", "black", 75.0, true, "", 4.4, 5, 4);

  VehicleManager manager; // creates an instance of the VehicleManager class
  manager.addVehicle(&myCar);
  manager.addVehicle(&myMot);
  manager.addVehicle(&myVan);
  
  std::ifstream file("vehicles.dat");
  if (!file.is_open()) {
    std::cerr << "Error: Unable to open file vehicles.dat" << std::endl;
    return 1;
  }
  
  std::string line;
  while (std::getline(file, line)) {
    std::stringstream ss(line);
    std::string type;
    std::getline(ss, type, ':');

    if (type == "bike") {
        std::string make, model, registrationNumber, colour, returnDate;
        double price;
        int engineSize;
	bool passengerSeat, luggageSpace, availability;

            std::getline(ss, make, ':');
    std::getline(ss, model, ':');
    std::getline(ss, registrationNumber, ':');
    std::getline(ss, colour, ':');
    ss >> price;
    ss.ignore();
    ss >> availability;
    ss.ignore();
    std::getline(ss, returnDate, ':');
    ss >> engineSize;
    ss.ignore();
    ss >> passengerSeat;
    ss.ignore();
    ss >> luggageSpace;

    Motorcycle *newMotorcycle = new Motorcycle(make, model, registrationNumber, colour, price,
					       availability, returnDate, engineSize, passengerSeat,
					       luggageSpace);
    manager.addVehicle(newMotorcycle);
}

else if (type == "car") {
    std::string make, model, registrationNumber, colour, returnDate;
    double price, engineSize;
    int numSeats, numDoors;
    bool availability;

    std::getline(ss, make, ':');
    std::getline(ss, model, ':');
    std::getline(ss, registrationNumber, ':');
    std::getline(ss, colour, ':');
    ss >> price;
    ss.ignore();
    ss >> availability;
    ss.ignore();
    std::getline(ss, returnDate, ':');
    ss >> engineSize;
    ss.ignore();
    ss >> numSeats;
    ss.ignore();
    ss >> numDoors;

    Car *newCar = new Car(make, model, registrationNumber, colour, price,
			  availability, returnDate, engineSize, numSeats, numDoors);
    manager.addVehicle(newCar);
}
 else if (type == "van") {
    std::string make, model, registrationNumber, colour, returnDate;
    double price, engineSize;
    int numSeats;
    bool availability, luggageSpace;

    std::getline(ss, make, ':');
    std::getline(ss, model, ':');
    std::getline(ss, registrationNumber, ':');
    std::getline(ss, colour, ':');
    ss >> price;
    ss.ignore();
    ss >> availability;
    ss.ignore();
    std::getline(ss, returnDate, ':');
    ss >> engineSize;
    ss.ignore();
    ss >> numSeats;
    ss.ignore();
    ss >> luggageSpace;

        Van *newVan = new Van(make, model, registrationNumber, colour, price,
			      availability, returnDate, engineSize, numSeats, luggageSpace);
	manager.addVehicle(newVan);	
    }

    file.close();
  }

  manager.displayAllVehicles();

    
  
    return 0;
}
