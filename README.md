# Bus Reservation System (C++)

This project is a simple bus reservation system created as a first-semester diploma project. It demonstrates basic object-oriented programming principles in C++.

## Features

- Displays available buses and routes
- Seat booking with user information
- Fare calculation
- Supports route display and seat visualization
- Uses class inheritance and modular structure
- Turbo C++ version uses `cprintf` for colored seat visualization

## Project Structure

- `src/BusReservation_Turbo.cpp`  
  → Turbo C++ version (requires `conio.h`, `cprintf`, works in DOS compilers)

- `src/BusReservation_Standard.cpp`  
  → Standard C++ version (portable to modern compilers, no Turbo functions)

- `docs/BusReservationRaw.txt`  
  → Early design and rough notes

## How to Run

### Turbo C++

1. Open Turbo C++ or similar DOS-based compiler
2. Compile and run `BusReservation_Turbo.cpp`

### Modern Compiler

1. Use any C++11+ compiler (g++, clang, Visual Studio)
2. Compile and run `BusReservation_Standard.cpp`

```bash
g++ src/BusReservation_Standard.cpp -o BusReservation
./BusReservation
```

## Author

Jaydeep Ahir
