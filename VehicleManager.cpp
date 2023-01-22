class VehicleManager {
    private:
        std::vector<Vehicle*> vehicles;
    public:
        void addVehicle(Vehicle* v) {
            vehicles.push_back(v);
        }

  void displayAllVehicles() {
    for (auto v : vehicles) {
        v->display();
    }
}
};
