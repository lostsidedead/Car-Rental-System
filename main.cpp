#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Car {
private:
    string brand;
    string model;
    int year;
    double pricePerDay;
    bool isAvailable;

public:
    Car(string b, string m, int y, double price) : brand(b), model(m), year(y), pricePerDay(price), isAvailable(true) {}

    // Show car details
    void showDetails() const {
        cout << brand << " " << model << " (" << year << ") - $" << pricePerDay << " per day" << (isAvailable ? " [Available]" : " [Rented]") << endl;
    }

    // Rent the car
    bool rentCar() {
        if (isAvailable) {
            isAvailable = false;
            return true;
        }
        return false;
    }

    // Return the car
    void returnCar() {
        isAvailable = true;
    }

    // Check if car is available
    bool availability() const {
        return isAvailable;
    }

    double getPricePerDay() const {
        return pricePerDay;
    }
};

class CarRentalSystem {
private:
    vector<Car> cars;

public:
    CarRentalSystem() {
        // Predefined cars available for rent
        cars.push_back(Car("Toyota", "Corolla", 2020, 50));
        cars.push_back(Car("Ford", "Fiesta", 2019, 40));
        cars.push_back(Car("Tesla", "Model 3", 2021, 100));
        cars.push_back(Car("BMW", "X5", 2018, 90));
    }

    // Display available cars
    void showAvailableCars() const {
        cout << "Available cars for rent:" << endl;
        for (const auto& car : cars) {
            if (car.availability()) {
                car.showDetails();
            }
        }
    }

    // Rent a car
    void rentCar(int index, int days) {
        if (index >= 0 && index < cars.size()) {
            if (cars[index].availability()) {
                if (cars[index].rentCar()) {
                    cout << "You have rented " << cars[index].getPricePerDay() << " per day." << endl;
                    cout << "Total cost for " << days << " days: $" << cars[index].getPricePerDay() * days << endl;
                }
            } else {
                cout << "Sorry, this car is already rented." << endl;
            }
        } else {
            cout << "Invalid car selection." << endl;
        }
    }

    // Return a rented car
    void returnCar(int index) {
        if (index >= 0 && index < cars.size()) {
            cars[index].returnCar();
            cout << "You have returned the car." << endl;
        } else {
            cout << "Invalid car selection." << endl;
        }
    }

    // Display all cars
    void showAllCars() const {
        cout << "All cars:" << endl;
        for (const auto& car : cars) {
            car.showDetails();
        }
    }
};

int main() {
    CarRentalSystem rentalSystem;
    int choice;

    while (true) {
        cout << "\nCar Rental System Menu:\n";
        cout << "1. Show Available Cars\n";
        cout << "2. Rent a Car\n";
        cout << "3. Return a Car\n";
        cout << "4. Show All Cars\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                rentalSystem.showAvailableCars();
                break;
            case 2: {
                int carIndex, days;
                cout << "Enter the car index (0, 1, 2, etc.) to rent: ";
                cin >> carIndex;
                cout << "Enter the number of days you want to rent: ";
                cin >> days;
                rentalSystem.rentCar(carIndex, days);
                break;
            }
            case 3: {
                int carIndex;
                cout << "Enter the car index to return: ";
                cin >> carIndex;
                rentalSystem.returnCar(carIndex);
                break;
            }
            case 4:
                rentalSystem.showAllCars();
                break;
            case 5:
                cout << "Exiting the system..." << endl;
                return 0;
            default:
                cout << "Invalid option, please try again." << endl;
        }
    }

    return 0;
}
