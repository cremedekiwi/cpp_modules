# C++ Modules (00-09)

This repository contains my implementation of the C++ modules. Each module focuses on different aspects of C++ programming, from basic syntax to advanced concepts like templates and STL containers.

## 📁 Project Structure

```
cpp-modules/
├── cpp00/    # Introduction to C++
├── cpp01/    # Memory allocation, pointers, references
├── cpp02/    # Ad-hoc polymorphism, operator overloading
├── cpp03/    # Inheritance
├── cpp04/    # Subtype polymorphism, abstract classes
├── cpp05/    # Repetition and exceptions
├── cpp06/    # C++ casts
├── cpp07/    # C++ templates
├── cpp08/    # Templated containers, iterators, algorithms
└── cpp09/    # STL
```

## 🎯 Module Overview

### CPP Module 00 - Introduction to C++
**Topics**: Namespaces, classes, member functions, stdio streams, initialization lists, static, const

**Exercises**:
- **ex00 - Megaphone**: String manipulation and command-line arguments
- **ex01 - My Awesome PhoneBook**: Classes, objects, and basic I/O operations

### CPP Module 01 - Memory allocation, pointers, references
**Topics**: Memory allocation, pointers to members, references, switch statement

**Exercises**:
- **ex00 - BraiiiiiiinnnzzzZ**: Stack vs heap allocation
- **ex01 - Moar brainz!**: Dynamic array allocation
- **ex02 - HI THIS IS BRAIN**: Pointers vs references
- **ex03 - Unnecessary violence**: References in practice
- **ex04 - Sed is for losers**: File manipulation and string replacement
- **ex05 - Harl 2.0**: Function pointers and switch statements

### CPP Module 02 - Ad-hoc polymorphism, operator overloading
**Topics**: Ad-hoc polymorphism, operator overloading, Orthodox Canonical class form

**Exercises**:
- **ex00 - My First Class in Orthodox Canonical Form**: Basic class structure
- **ex01 - Towards a more useful fixed-point number class**: Constructor overloading
- **ex02 - Now we're talking**: Operator overloading and arithmetic operations

### CPP Module 03 - Inheritance
**Topics**: Inheritance, access specifiers, protected members

**Exercises**:
- **ex00 - Aaaaand... OPEN!**: Basic class implementation
- **ex01 - Serena, my love!**: Single inheritance
- **ex02 - Repetitive work**: Multiple derived classes

### CPP Module 04 - Subtype polymorphism, abstract classes
**Topics**: Subtype polymorphism, abstract classes, interfaces

**Exercises**:
- **ex00 - Polymorphism**: Virtual functions and polymorphism
- **ex01 - I don't want to set the world on fire**: Deep copy and memory management
- **ex02 - Abstract class**: Pure virtual functions and abstract classes

### CPP Module 05 - Repetition and exceptions
**Topics**: Repetition, exceptions, try/catch blocks

**Exercises**:
- **ex00 - Mommy, when I grow up, I want to be a bureaucrat!**: Exception handling basics
- **ex01 - Form up, maggots!**: Custom exceptions and form validation
- **ex02 - No, you need form 28B, not 28C...**: Inheritance with exceptions
- **ex03 - At least this beats coffee-making**: Factory pattern implementation

### CPP Module 06 - C++ casts
**Topics**: Scalar type conversion, reinterpret_cast, static_cast, dynamic_cast

**Exercises**:
- **ex00 - Conversion of scalar types**: Type conversion and validation
- **ex01 - Serialization**: Pointer serialization with reinterpret_cast
- **ex02 - Identify real type**: Runtime type identification with dynamic_cast

### CPP Module 07 - C++ templates
**Topics**: Function templates, class templates, template specialization

**Exercises**:
- **ex00 - Start with a few functions**: Function templates
- **ex01 - Iter**: Template functions with function pointers
- **ex02 - Array**: Template class implementation

### CPP Module 08 - Templated containers, iterators, algorithms
**Topics**: Templated containers, iterators, algorithms from STL

**Exercises**:
- **ex00 - Easy find**: STL algorithms and iterators
- **ex01 - Span**: Custom container with STL algorithms
- **ex02 - Mutated abomination**: Extending STL containers

### CPP Module 09 - STL
**Topics**: STL containers (map, stack, vector, deque), algorithms, performance

**Exercises**:
- **ex00 - Bitcoin Exchange**: File parsing with std::map
- **ex01 - Reverse Polish Notation**: Stack-based calculator
- **ex02 - PmergeMe**: Performance comparison between containers

## 🛠️ Compilation and Usage

Each module contains individual exercises with their own Makefiles. To compile:

```bash
# Navigate to specific exercise
cd cpp00/ex00

# Compile using Makefile
make

# Run the program
./megaphone [arguments]

# Clean compiled files
make clean    # Remove object files
make fclean   # Remove object files and executable
make re       # Recompile everything
```

### Compilation Flags
All exercises are compiled with:
- `-Wall -Wextra -Werror`: Enable all warnings and treat them as errors
- `-std=c++98`: Use C++98 standard (42 School requirement)

## 📋 Key Learning Outcomes

### Object-Oriented Programming
- **Encapsulation**: Data hiding and access control
- **Inheritance**: Single and multiple inheritance patterns
- **Polymorphism**: Virtual functions and abstract classes
- **Abstraction**: Interface design and pure virtual functions

### Memory Management
- **Stack vs Heap**: Understanding allocation strategies
- **RAII**: Resource Acquisition Is Initialization
- **Deep vs Shallow Copy**: Copy constructors and assignment operators
- **Memory Leaks**: Prevention and debugging techniques

### Advanced C++ Features
- **Templates**: Generic programming and type safety
- **Operator Overloading**: Custom operators for user-defined types
- **Exception Handling**: Error management and resource cleanup
- **STL**: Standard Template Library containers and algorithms

### Design Patterns
- **Orthodox Canonical Form**: Standard class structure
- **Factory Pattern**: Object creation abstraction
- **Iterator Pattern**: Traversing containers uniformly
