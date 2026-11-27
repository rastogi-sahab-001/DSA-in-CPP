# 1. Introduction to Pattern Printing

Pattern printing means displaying numbers, alphabets or symbols in a specific format using loops.

### Main Concept: Nested Loops

A loop inside another loop is called a Nested Loop.

- Outer Loop (`i`): Controls rows.
- Inner Loop (`j`): Controls columns.
- `cout`: Prints the pattern.
- `endl`: Moves to the next line.

### Basic Syntax

```cpp
for(int i = 1; i <= n; i++)
{
    for(int j = 1; j <= n; j++)
    {
        cout << "* ";
    }
    cout << endl;
}
```

### Important Points

1. Outer loop controls the number of rows.
2. Inner loop controls the number of columns.
3. Inner loop completes all iterations before the outer loop moves to the next row.
4. Changing loop conditions changes the pattern.

# 2. Squares and Rectangles

## A. Star Rectangle

Example (rows = 3, columns = 5):

```text
* * * * *
* * * * *
* * * * *
```

Logic:
- Outer loop runs for rows.
- Inner loop runs for columns.
- Print `*` in every iteration.

## B. Star Square

Example (n = 4):

```text
* * * *
* * * *
* * * *
* * * *
```

Logic:
- Both loops run from 1 to n.
- Rows and columns are equal.

## C. Number Square

Example (n = 4):

```text
1 2 3 4
1 2 3 4
1 2 3 4
1 2 3 4
```

Logic:
- Print `j` inside the inner loop.

## D. Alphabet Square

Example (n = 4):

```text
A B C D
A B C D
A B C D
A B C D
```

Logic:
- Convert numbers into characters using ASCII.
- `char(j + 64)` converts 1 to A, 2 to B, etc.

## E. Lowercase Alphabet Square

Example:

```text
a b c d
a b c d
a b c d
a b c d
```

Logic:
- `char(j + 96)` converts 1 to a, 2 to b, etc.

## F. Number Square 2

Example:

```text
1 1 1 1
2 2 2 2
3 3 3 3
4 4 4 4
```

Logic:
- Print `i` inside the inner loop.

## G. Alphabet Square 3

Example:

```text
A A A A
B B B B
C C C C
D D D D
```

Logic:
- Print `char(i + 64)`.

## H. Alphabet Square 4

Example:

```text
a a a a
B B B B
c c c c
D D D D
```

Logic:
- Odd rows: lowercase alphabets.
- Even rows: uppercase alphabets.

# 3. Triangles

## A. Star Triangle

Example:

```text
*
* *
* * *
* * * *
```

Logic:
- Outer loop runs from 1 to n.
- Inner loop runs from 1 to i.
- Print `*`.

## B. Number Triangle

Example:

```text
1
1 2
1 2 3
1 2 3 4
```

Logic:
- Print `j` inside the inner loop.

## C. Alphabet Triangle

Example:

```text
A
A B
A B C
A B C D
```

Logic:
- Print `char(j + 64)`.

## D. Alphanumeric Triangle

Example:

```text
1
A B
1 2 3
A B C D
```

Logic:
- Alternate numbers and alphabets according to the row.
- Use an `if-else` condition.

# 4. Horizontally Flipped Triangles

## A. Star Triangle Horizontally Flipped

Example:

```text
* * * *
* * *
* *
*
```

Logic:
- Outer loop runs from 1 to n.
- Inner loop runs from 1 to `n - i + 1`.

## B. Number Triangle Horizontally Flipped

```text
1 2 3 4
1 2 3
1 2
1
```

Logic:
- Print `j`.
- Reduce the inner loop limit after every row.

## C. Alphabet Triangle Horizontally Flipped

```text
A B C D
A B C
A B
A
```

Logic:
- Print `char(j + 64)`.
- Reduce the number of columns in every row.