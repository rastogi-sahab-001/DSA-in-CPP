# DSA in C++ – Lecture 07
## Topic: Loops

### 1. Print Even Numbers from 1 to 100

Even numbers are divisible by 2.

Condition:
```cpp
i % 2 == 0
```

Program:
```cpp
for(int i = 1; i <= 100; i++) {
    if(i % 2 == 0) {
        cout << i << " ";
    }
}
```

Output:
```text
2 4 6 8 10 ... 100
```

### 2. Print Odd Numbers Divisible by 3

Conditions:
- Odd number: `i % 2 != 0`
- Divisible by 3: `i % 3 == 0`

Program:
```cpp
for(int i = 1; i <= 100; i++) {
    if(i % 2 != 0 && i % 3 == 0) {
        cout << i << " ";
    }
}
```

Output:
```text
3 9 15 21 27 ... 99
```

### 3. Multiplication Table of 19

We multiply 19 by numbers from 1 to 10.

Program:
```cpp
for(int i = 1; i <= 10; i++) {
    cout << 19 * i << " ";
}
```

Output:
```text
19 38 57 76 95 114 133 152 171 190
```

**Homework:** Take a number `n` from the user and print its multiplication table.

```cpp
int n;
cin >> n;

for(int i = 1; i <= 10; i++) {
    cout << n * i << " ";
}
```

### 4. Print Numbers from n to 1

If the input is 7, the output will be:

```text
7 6 5 4 3 2 1
```

Program:
```cpp
int n;
cin >> n;

for(int i = n; i >= 1; i--) {
    cout << i << " ";
}
```

**Important:**
- `i--` decreases the value by 1.
- `i >= 1` keeps the loop running until 1.

### 5. Arithmetic Progression (AP)

An Arithmetic Progression is a sequence in which the difference between consecutive terms is constant.

Example:
```text
2, 5, 8, 11, 14, 17 ...
```

Here:
- First term (a) = 2
- Common difference (d) = 3

**Formula:**

`an = a + (n - 1) × d`

For this AP:

`an = 2 + (n - 1) × 3`

`an = 3n - 1`

Program to print n terms:
```cpp
int n;
cin >> n;

for(int i = 2; i <= 3*n-1; i += 3) {
    cout << i << " ";
}
```

Example: If n = 5

Output:
```text
2 5 8 11 14
```

### 6. Geometric Progression (GP)

A Geometric Progression is a sequence in which each term is multiplied by a constant number to get the next term.

Example:
```text
1, 2, 4, 8, 16, 32 ...
```

Here:
- First term (a) = 1
- Common ratio (r) = 2

**Formula:**

`an = a × r^(n-1)`

Program:
```cpp
int n;
cin >> n;

int term = 1;

for(int i = 1; i <= n; i++) {
    cout << term << " ";
    term *= 2;
}
```

Example: If n = 5

Output:
```text
1 2 4 8 16
```

### 7. Print the Series 99, 95, 91, 87...

Print all terms that are positive.

Here:
- First term = 99
- Common difference = -4

Program:
```cpp
for(int i = 99; i > 0; i -= 4) {
    cout << i << " ";
}
```

Output:
```text
99 95 91 87 83 ... 7 3
```

### 8. Print Alphabets with ASCII Values

Every character has a corresponding ASCII value.

Examples:
- A = 65
- B = 66
- C = 67
- ...
- Z = 90

Program:
```cpp
for(char ch = 'A'; ch <= 'Z'; ch++) {
    cout << ch << " = " << (int)ch << endl;
}
```

**Important:** Typecasting `(int)ch` converts the character into its ASCII value.

### 9. Print the Given Sequence

Sequence:
```text
1, n, 2, n-1, 3, n-2, ...
```

For example, if n = 5:

```text
1 5 2 4 3 3 4 2 5 1
```

This question requires printing two values in every iteration:
- First value increases from 1.
- Second value decreases from n.

### 10. Break and Continue

#### Break

`break` immediately terminates the loop.

Example:
```cpp
for(int i = 1; i <= 10; i++) {
    if(i == 5) {
        break;
    }
    cout << i << " ";
}
```

Output:
```text
1 2 3 4
```

When `i` becomes 5, the loop stops completely.

#### Continue

`continue` skips the current iteration and moves to the next iteration.

Example:
```cpp
for(int i = 1; i <= 5; i++) {
    if(i == 3) {
        continue;
    }
    cout << i << " ";
}
```

Output:
```text
1 2 4 5
```

When `i` becomes 3, that iteration is skipped.

**Difference:**

| Break | Continue |
|---|---|
| Terminates the loop | Skips current iteration |
| Control comes out of loop | Control moves to next iteration |

### 11. Factors of a Number

A factor is a number that divides another number completely without leaving a remainder.

Example: Factors of 12:

```text
1, 2, 3, 4, 6, 12
```

Condition to check a factor:
```cpp
n % i == 0
```

Program:
```cpp
int n;
cin >> n;

for(int i = 1; i <= n; i++) {
    if(n % i == 0) {
        cout << i << " ";
    }
}
```

### 12. Prime Number

A prime number is a number that has exactly two factors:
1. 1
2. The number itself

Examples:
```text
2, 3, 5, 7, 11, 13, 17
```

A number having more than two factors is called a composite number.

**Logic from the lecture:**

Check whether the number is divisible by any number from 2 to n-1.

If:
```cpp
n % i == 0
```
Then the number is composite.

Program:
```cpp
int n;
cin >> n;

bool isPrime = true;

if(n <= 1) {
    isPrime = false;
}

for(int i = 2; i < n; i++) {
    if(n % i == 0) {
        isPrime = false;
        break;
    }
}

if(isPrime) {
    cout << "Prime Number";
}
else {
    cout << "Not a Prime Number";
}
```

**Important:** 0 and 1 are not prime numbers.

---