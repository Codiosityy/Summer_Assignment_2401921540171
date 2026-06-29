# OOPS Problem -- Week 3

## Topic: Abstract Class -- Compartment

## Problem Statement

Model rail coach compartments using an abstract class. Each compartment type provides its own notice.

## File Structure

```
src/
  compartment/
    Compartment.java      # Abstract class
    FirstClass.java       # First class compartment
    Ladies.java           # Ladies compartment
    General.java          # General compartment
    Luggage.java          # Luggage compartment
  test/
    TestCompartment.java  # Test driver
```

## Design

### Compartment (Abstract Class)

```java
public abstract class Compartment {
    public abstract String notice();
}
```

### Subclasses

| Class | Notice |
|-------|--------|
| `FirstClass` | "First Class compartment: Comfortable seating and premium service." |
| `Ladies` | "Ladies compartment: Reserved for ladies only." |
| `General` | "General compartment: Open for all passengers." |
| `Luggage` | "Luggage compartment: For carrying luggage and goods." |

### TestCompartment

- Declares an array of size 10
- Each slot randomly instantiates one of the four compartment types (1-4)
- Calls `notice()` on each to demonstrate polymorphic behavior

## Concepts Demonstrated

- **Abstract Class**: `Compartment` cannot be instantiated directly
- **Abstract Method**: `notice()` must be overridden by all subclasses
- **Polymorphism**: Array of `Compartment` holds any subclass; `notice()` behaves differently per type
- **Random Behavior**: `Random` chooses which subclass to instantiate at each slot
- **Inheritance**: All four compartment types extend `Compartment`

## How to Run

```bash
cd Week_3/OOPS
javac src/compartment/*.java src/test/*.java -d out
java -cp out test.TestCompartment
```
