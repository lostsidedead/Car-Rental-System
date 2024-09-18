# Car Rental System - C++ Project

This project is a **Car Rental System** implemented in C++. It allows users to view available cars, rent a car for a specific number of days, and return a car when finished. Each car has details such as the brand, model, year, and price per day.

## Features

1. **Show Available Cars**: Users can view the cars that are currently available for rent.
2. **Rent a Car**: Users can rent a car for a specific number of days. The system calculates and displays the total cost based on the daily rental rate.
3. **Return a Car**: Users can return a car they have rented, making it available again for others to rent.
4. **Show All Cars**: Displays all cars in the system, including both available and rented cars.
5. **Exit**: Users can exit the system.

## How to Use

1. Clone or download the project files.
2. Open the terminal and navigate to the project folder.
3. Compile the C++ code using the following command:

    ```
    g++ car_rental.cpp -o carRental
    ```

4. Run the executable:

    ```
    ./carRental
    ```

5. Follow the on-screen menu to navigate the car rental system.

## Menu Options

- **1. Show Available Cars**: Displays a list of cars that are currently available for rent.
- **2. Rent a Car**: Prompts the user to select a car by its index and input the number of days for the rental. Calculates and displays the total cost.
- **3. Return a Car**: Users can return a rented car by selecting it by its index.
- **4. Show All Cars**: Displays all cars, showing both available and rented cars.
- **5. Exit**: Exits the program.

## Example Cars in the System

1. **Toyota Corolla (2020)** - $50 per day
2. **Ford Fiesta (2019)** - $40 per day
3. **Tesla Model 3 (2021)** - $100 per day
4. **BMW X5 (2018)** - $90 per day

## Future Enhancements

- Add customer profiles and history of rentals.
- Add more car details, like mileage and fuel efficiency.
- Integrate payment processing functionality.
- Store rental data in a file for persistence across sessions.
