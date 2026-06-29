# OOPS Problem -- Week 1

## Topic: Interfaces -- LibraryUser

## Problem Statement

Design a library application for Adults and Children. Both register accounts, but rules differ by age and book type.

## File Structure

| File | Description |
|------|-------------|
| `LibraryUser.java` | Interface with `registerAccount()` and `requestBook()` |
| `KidUser.java` | Implements `LibraryUser` for children |
| `AdultUser.java` | Implements `LibraryUser` for adults |
| `LibraryInterfaceDemo.java` | Test driver with sample cases |

## Design

### LibraryUser (Interface)

```java
public interface LibraryUser {
    void registerAccount();
    void requestBook();
}
```

### KidUser

- **Age requirement**: Must be under 12 to register as Kid
- **Book restriction**: Only "Kids" books allowed
- **Due period**: 10 days

### AdultUser

- **Age requirement**: Must be over 12 to register as Adult
- **Book restriction**: Only "Fiction" books allowed
- **Due period**: 7 days

## Concepts Demonstrated

- **Interface**: `LibraryUser` defines the contract for all user types
- **Polymorphism**: Both `KidUser` and `AdultUser` implement the same interface
- **Encapsulation**: Private fields with getters/setters
- **Constructor injection**: Age and book type passed via constructor
- **`@Override`**: Explicit method overriding annotation
- **String comparison**: `equalsIgnoreCase()` for case-insensitive matching

## How to Run

```bash
cd Week_1/OOPS
javac *.java
java LibraryInterfaceDemo
```

## Expected Output

```
===== Test Case #1: KidUser =====
You have successfully registered under a Kids Account
Book Issued successfully, please return the book within 10 days

Sorry, Age must be less than 12 to register as a kid
Oops, you are allowed to take only kids books

===== Test Case #2: AdultUser =====
Sorry, Age must be greater than 12 to register as an adult
Oops, you are allowed to take only adult Fiction books

You have successfully registered under an Adult Account
Book Issued successfully, please return the book within 7 days
```
