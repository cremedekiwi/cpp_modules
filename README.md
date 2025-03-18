# C++ Modules

This repository contains my implementations for the C++ modules (CPP00 through CPP09) as part of the 42 curriculum. These modules are designed to introduce to various concepts in C++ programming, from basic syntax to more advanced features such as templates, inheritance, and standard library containers.

## Overview

The C++ modules at 42 focus on:
1. Learning the basics of C++ syntax
2. Object-oriented programming concepts
3. Memory management
4. STL containers and algorithms
5. Templates and generic programming

## Modules

### CPP00: Introduction to C++
- **ex00**: Megaphone - Simple string manipulation
- **ex01**: PhoneBook - Basic class implementation with simple storage system

### CPP01: Memory Allocation & References
- **ex00**: Zombie - Memory allocation and pointers
- **ex01**: ZombieHorde - Dynamic memory allocation
- **ex02**: Memory addresses and references
- **ex03**: HumanA, HumanB, Weapon - Memory and references/pointers
- **ex04**: File manipulation
- **ex05**: Harl - Pointers to member functions

### CPP02: Ad-hoc Polymorphism & Operator Overloading
- **ex00**: Fixed - Fixed-point number class introduction
- **ex01**: Fixed - Fixed-point number class with conversions
- **ex02**: Fixed - Fixed-point number class with operators

### CPP03: Inheritance
- **ex00**: ClapTrap - Basic class implementation
- **ex01**: ScavTrap - Inheritance from ClapTrap
- **ex02**: FragTrap - More inheritance

### CPP04: Polymorphism, Abstract Classes & Interfaces
- **ex00**: Animal, Dog, Cat - Basic inheritance and polymorphism
- **ex01**: Brain - Deep copy and references
- **ex02**: AAnimal - Abstract classes

### CPP05: Exceptions
- **ex00**: Bureaucrat - Basic exception handling
- **ex01**: Form - More exceptions
- **ex02**: AForm, Presidential/Robotomy/Shrubbery Forms - Inheritance with exceptions
- **ex03**: Intern - Factory design pattern

### CPP06: C++ Casts
- **ex00**: ScalarConverter - Type conversion
- **ex01**: Serializer - Data serialization
- **ex02**: Base, A, B, C - Dynamic casts and RTTI

### CPP07: Templates
- **ex00**: Templates for swap, min, max functions
- **ex01**: iter - Function template with iterators
- **ex02**: Array - Template class implementation

### CPP08: STL Containers
- **ex00**: easyfind - Function templates with containers
- **ex01**: Span - STL containers and algorithms
- **ex02**: MutantStack - Container adaptors

### CPP09: STL Containers II
- **ex00**: BitcoinExchange - File parsing and map container
- **ex01**: RPN - Reverse Polish Notation calculator
- **ex02**: PmergeMe - Sorting algorithms with different containers

## Compilation

Each exercise contains its own Makefile. To compile:

```bash
cd [module]/[exercise]
make
```

To run the programs:

```bash
./[program_name] [arguments if needed]
```
