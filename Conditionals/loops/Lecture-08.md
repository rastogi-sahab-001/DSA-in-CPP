# DSA in C++ – Lecture 08
## Topic: Loops

### 1. Factors of a Number

A number `i` is a factor of `n` if `n` is completely divisible by `i`.

**Condition:**
```cpp
n % i == 0
```

Example: Factors of 60

`1, 2, 3, 4, 5, 6, 10, 12, 15, 20, 30, 60`

**Program:**
```cpp
int n;
cin >> n;

for(int i = 1; i <= n; i++) {
    if(n % i == 0) {
        cout << i << " ";
    }
}
```

### 2. Prime or Composite Number

**Prime Number:** A number having exactly two factors: 1 and itself.

Examples: `2, 3, 5, 7, 11`

**Composite Number:** A number having more than two factors.

Examples: `4, 6, 8, 9, 10`

**Program (Lecture Method):**
```cpp
int n;
cout << "Enter a number: ";
cin >> n;

bool flag = false;

for(int i = 2; i <= n-1; i++) {
    if(n % i == 0) {
        flag = true;
        break;
    }
}

if(flag == true)
    cout << "Composite Number";
else
    cout << "Prime Number";
```

**Important:** This lecture method needs an extra check for `n <= 1`, because 0 and 1 are neither prime nor composite.

### 3. While Loop

A while loop is used to execute statements repeatedly while a condition is true.

**Syntax:**
```cpp
initialization;

while(condition) {
    // statements
    update;
}
```

**Example:**
```cpp
int i = 1;

while(i <= 4) {
    cout << i << " ";
    i++;
}
```

**Output:**
```text
1 2 3 4
```

**Working:**
1. Initialize the variable.
2. Check the condition.
3. Execute the loop body.
4. Update the variable.
5. Repeat until the condition becomes false.

### 4. Do-While Loop

A do-while loop executes its body first and checks the condition afterwards.

**Syntax:**
```cpp
do {
    // statements
} while(condition);
```

**Example:**
```cpp
int i = 1;

do {
    cout << i << " ";
    i++;
} while(i <= 5);
```

**Output:**
```text
1 2 3 4 5
```

**Important Difference:**

| While Loop | Do-While Loop |
|---|---|
| Condition is checked first. | Condition is checked after execution. |
| May execute zero times. | Executes at least once. |
| Entry-controlled loop. | Exit-controlled loop. |

### 5. Infinite Loop

An infinite loop is a loop that never terminates because its condition always remains true.

**Example:**
```cpp
while('a' < 'b') {
    cout << "Hello" << endl;
}
```

Since `'a' < 'b'` is always true, the loop runs infinitely.

### 6. Assignment vs Comparison in While Loop

**Assignment operator (`=`):**
Assigns a value to a variable.

**Comparison operator (`==`):**
Checks whether two values are equal.

Example:
```cpp
int i;

while(i = 10) {
    cout << i << endl;
    i = i + 1;
}
```

Here, `i = 10` assigns 10 to `i`. The expression evaluates to true because 10 is non-zero.

The loop becomes infinite because every iteration assigns 10 again.

### 7. Break and Continue Revision

**Break:** Completely terminates the loop.

```cpp
for(int i = 1; i <= 10; i++) {
    if(i == 5)
        break;

    cout << i << " ";
}
```

Output:
```text
1 2 3 4
```

**Continue:** Skips the current iteration and moves to the next iteration.

```cpp
for(int i = 1; i <= 5; i++) {
    if(i == 3)
        continue;

    cout << i << " ";
}
```

Output:
```text
1 2 4 5
```

### 8. Important Output Prediction Questions

**Question 1:**
```cpp
while('a' < 'b') {
    cout << "Hello" << endl;
}
```
Result: Infinite loop.

**Question 2:**
```cpp
int i;

while(i = 10) {
    cout << i << endl;
    i = i + 1;
}
```
Result: Infinite loop because `i` is assigned 10 in every condition check.

**Question 3:**
```cpp
int t = 10;

while(t /= 2) {
    cout << "Hello" << endl;
}
```
Result: `Hello` prints 3 times.

Explanation:
- First check: `10 / 2 = 5` → True
- Second check: `5 / 2 = 2` → True
- Third check: `2 / 2 = 1` → True
- Fourth check: `1 / 2 = 0` → False

---