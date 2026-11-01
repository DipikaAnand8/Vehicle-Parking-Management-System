# Vehicle Parking Management System

A simple, menu-driven Vehicle Parking Management System developed using C++. The program keeps track of the number of cars, bikes, jeeps, and buses entering a parking area.

## Features

- Count cars entering the parking area.
- Count bikes entering the parking area.
- Count jeeps entering the parking area.
- Count buses entering the parking area.
- Display the total count for each vehicle type.
- Reset all vehicle counts.
- Exit the program through a menu option.

## Technologies Used

- C++
- Standard Input/Output (`iostream`)

## How to Run

1. Clone or download this repository.
2. Open the project in a C++ IDE or terminal.
3. Compile the source file:

   ```bash
   g++ main.cpp -o parking
   ```

4. Run the compiled program:

   On Windows:

   ```bash
   parking.exe
   ```

   On Linux/macOS:

   ```bash
   ./parking
   ```

## Menu Options

| Option | Action |
|---|---|
| 1 | Register a car |
| 2 | Register a bike |
| 3 | Register a jeep |
| 4 | Register a bus |
| 5 | Display vehicle counts |
| 6 | Reset all counts |
| 0 | Exit the program |

## Limitations

- Vehicle counts are stored in memory and reset when the program restarts.
- The program does not currently store vehicle entry times or parking fees.

## Future Improvements

- Add parking capacity limits.
- Save vehicle counts to a file.
- Add parking fee calculation.
- Improve input validation and user interface.

## Author

Created as a C++ programming project.
