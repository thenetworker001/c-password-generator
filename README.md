# Password Generator in C
A command line password generator written in pure C.
Generates random passwords using printable ASCII characters excluding whitespace.
This project was built as a learning exercise to practice core C programming concepts.

---

## Features
- User-defined password length.
- Printable ASCII character set (ASCII 33 '!' to 126 '-')
- Input validation with exit status codes.
- Safe buffer handling using pointers.
- Modular function-based design.

---

## Constraints
- Minimum password length: 8 characters
- Maximum password length: 25 characters

---

## Build and Run
Compile using GCC:
```bash
gcc password_generator.c -o passgen
```