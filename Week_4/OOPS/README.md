# OOPS Problems -- Week 4

## Topic: Mixed (4 Sub-Questions)

This week covers four separate OOPS concepts across different packages.

---

## Q1: Interface -- Test

| File | Description |
|------|-------------|
| `src/interfaces/Test.java` | Interface with `square(int number)` method |
| `src/interfaces/Arithmetic.java` | Implements `Test`, returns `number * number` |
| `src/interfaces/ToTestInt.java` | Test driver |

**Concepts**: Interface, `@Override`, method implementation

```bash
cd Week_4/OOPS
javac src/interfaces/*.java -d out
java -cp out interfaces.ToTestInt
```

**Output**:
```
Square of 5 = 25
```

---

## Q2: Inner Class -- Outer/Inner

| File | Description |
|------|-------------|
| `src/innerclass/Outer.java` | Outer class with `display()` and inner class `Inner` |
| `src/innerclass/Main.java` | Test driver |

**Concepts**: Inner class, nested class instantiation (`outer.new Inner()`)

```bash
javac src/innerclass/*.java -d out
java -cp out innerclass.Main
```

**Output**:
```
Display method of Outer class
Display method of Inner class
```

---

## Q3: Class Design -- Point

| File | Description |
|------|-------------|
| `src/point/Point.java` | Class with private `x, y`, constructors, setters |

**Concepts**: Encapsulation, constructors (default + parameterized), setters (`setX`, `setY`, `setXY`)

```bash
javac src/point/*.java -d out
java -cp out point.Point
```

**Output**:
```
Point = (0, 0)
Point = (10, 20)
Point = (15, 25)
Point = (30, 40)
```

---

## Q4: Inheritance -- Box / Box3D

| File | Description |
|------|-------------|
| `src/inheritance/Box.java` | Base class with `length`, `breadth`, `area()` |
| `src/inheritance/Box3D.java` | Extends `Box`, adds `height`, `volume()` |
| `src/inheritance/BoxDemo.java` | Test driver |

**Concepts**: Inheritance (`extends`), `super()` constructor call, method reuse (`area()`), method addition (`volume()`)

```bash
javac src/inheritance/*.java -d out
java -cp out inheritance.BoxDemo
```

**Output**:
```
Area = 20.0
Area = 20.0
Volume = 60.0
```

---

## Summary of Concepts

| Q | Concept | Key Idea |
|---|---------|----------|
| 1 | Interface | Contract via `implements`, `@Override` |
| 2 | Inner Class | Nested class requires outer instance |
| 3 | Encapsulation | Private fields, public getters/setters |
| 4 | Inheritance | `extends`, `super()`, method reuse/overriding |
