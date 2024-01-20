# Cafe Management System

## Overview
The Cafe Management System is a simple C++ program designed for cafe employees to manage and update item prices, quantities, and serve customers efficiently.

## Features
- **Employee Sign-in**: Enter your employee ID to access the system.
- **Update Prices and Quantities**: Modify the prices and quantities of items on the cafe menu.
- **Serve Students**: Take orders from students, display the menu, and track transactions.
- **Menu Display**: View the cafe menu with current prices and quantities.
- **Transaction Tracking**: Keep a count of the total transactions.

## How to Use
1. Run the program.
2. Enter your employee ID when prompted.
3. Choose an option:
    - Option 1: Update prices and quantities.
    - Option 2: Serve students.
4. If you choose to update prices and quantities:
    - Select an item to update.
    - Enter the new price or quantity.
5. If you choose to serve students:
    - Enter the number of students to be served.
    - Select two items for each student.
6. After completing the tasks, you can switch log-in or exit.

## Menu
The menu includes the following items:
1. Tea
2. Small Pizza
3. Patties
4. Pastry
5. Samosa
6. Green Salad
7. Sandwich
8. Burger
9. Fries
10. Coffee

## Build and Run
Compile the code using a C++ compiler and run the executable.

Example:
```bash
g++ cafe_management.cpp -o cafe_management
./cafe_management
