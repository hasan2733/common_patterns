# Common Patterns in C++

This repository contains 12 beginner-friendly C++ programs for practicing
nested loops, row/column relationships, conditions, counters, spacing, and
symmetry. Each file is a standalone program that asks for the number of rows
or the outer number and prints one or more related patterns.

Pattern problems are useful because every printed character answers two
questions:

1. Which row am I printing?
2. Which column am I printing, and what should appear there?

## Quick Start

Compile any pattern with a C++ compiler:

```bash
g++ -std=c++17 -Wall -Wextra pattern_01.cpp -o pattern_01
./pattern_01
```

For example, enter `5` when the program asks for the number of rows. The
programs are independent, so each file can be compiled and practiced
separately.

## Pattern Index

| File | Pattern |
| --- | --- |
| `pattern_01.cpp` | Solid square |
| `pattern_02.cpp` | Increasing star triangle |
| `pattern_03.cpp` | Increasing and repeated-number triangles |
| `pattern_04.cpp` | Inverted star and number triangles |
| `pattern_05.cpp` | Pyramid, inverted pyramid, and diamond |
| `pattern_06.cpp` | Binary checkerboard triangle |
| `pattern_07.cpp` | Palindromic number triangle |
| `pattern_08.cpp` | Floyd's triangle |
| `pattern_09.cpp` | Palindromic alphabet pyramid |
| `pattern_10.cpp` | Butterfly/hourglass variations |
| `pattern_11.cpp` | Hollow square |
| `pattern_12.cpp` | Concentric square numbers |

---

## 1. Solid Square — `pattern_01.cpp`

Every row contains exactly `n` stars, and there are exactly `n` rows. The
inner loop does not depend on the row number, so every row is identical.

**Simulation for `n = 5`:**

```text
* * * * *
* * * * *
* * * * *
* * * * *
* * * * *
```

**Loop idea:** `rows = n`, `columns = n`.

---

## 2. Increasing Star Triangle — `pattern_02.cpp`

Row `r` prints `r` stars. The first row has one star, the second has two, and
the number of printed characters grows by one on every row.

**Simulation for `n = 5`:**

```text
*
* *
* * *
* * * *
* * * * *
```

**Loop idea:** for each row `r`, print columns `1` through `r`.

---

## 3. Increasing and Repeated-Number Triangles — `pattern_03.cpp`

This file prints two related triangles for each test case:

- `p1`: each row counts from `1` to the row number.
- `p2`: each row repeats the row number.

**Simulation for `n = 5`:**

```text
p1                 p2
1                  1
1 2                2 2
1 2 3              3 3 3
1 2 3 4            4 4 4 4
1 2 3 4 5          5 5 5 5 5
```

**Loop idea:** `p1` prints the column counter `c`; `p2` prints the row
counter `r`.

---

## 4. Inverted Triangles — `pattern_04.cpp`

The outer loop starts at `n` and decreases to `1`, so the widest row appears
first and the narrowest row appears last. Like pattern 3, this file prints
both star and number versions.

**Simulation for `n = 5`:**

```text
Stars              Numbers
* * * * *           1 2 3 4 5
* * * *             1 2 3 4
* * *               1 2 3
* *                 1 2
*                   1
```

**Loop idea:** for a current row size `r`, print columns `1` through `r`.

---

## 5. Pyramids and Diamond — `pattern_05.cpp`

This file contains three functions:

- `p1`: an upright centered pyramid.
- `p2`: an inverted centered pyramid.
- `diamond_p`: an upright pyramid followed by a downward pyramid.

For row `r`, the program prints `n - r` groups of leading spaces and then
`2 * r - 1` stars. The odd number of stars keeps the shape centered.

**Simulation for `n = 4`:**

Upright pyramid:

```text
      *
    * * *
  * * * * *
* * * * * * *
```

Inverted pyramid:

```text
* * * * * * *
  * * * * *
    * * *
      *
```

Diamond:

```text
      *
    * * *
  * * * * *
* * * * * * *
  * * * * *
    * * *
      *
```

**Loop idea:** spaces control horizontal position; odd star counts control
width and symmetry.

---

## 6. Binary Checkerboard Triangle — `pattern_06.cpp`

The value depends on both row and column parity. A `1` is printed when the
row and column have the same parity; otherwise a `0` is printed.

**Simulation for `n = 5`:**

```text
1
0 1
1 0 1
0 1 0 1
1 0 1 0 1
```

**Loop idea:** print `1` when `(row % 2) == (column % 2)`, otherwise print
`0`.

---

## 7. Palindromic Number Triangle — `pattern_07.cpp`

Each row counts upward from `1` to `r`, prints a shrinking middle gap, and
then counts backward from `r` to `1`. The result is symmetrical around the
center.

**Simulation for `n = 5`:**

```text
1        1
12      21
123    321
1234  4321
1234554321
```

**Loop idea:** left numbers use increasing columns, the gap has width
`2 * (n - r)`, and right numbers use decreasing columns.

---

## 8. Floyd's Triangle — `pattern_08.cpp`

Floyd's triangle uses one counter that continues across rows. The first row
contains `1`, the second contains `2 3`, and so on.

**Simulation for `n = 5`:**

```text
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
```

**Loop idea:** initialize `k = 1`, print `k`, then increment it after every
position.

---

## 9. Palindromic Alphabet Pyramid — `pattern_09.cpp`

Each row is centered with leading spaces. Letters increase from `A` toward
the middle and then decrease, producing a mirrored alphabet pyramid.

**Simulation for `n = 5`:**

```text
    A
   ABA
  ABCBA
 ABCDCBA
ABCDEDCBA
```

**Loop idea:** print `n - r` spaces, then use a character that increments in
the first half of the row and decrements in the second half.

---

## 10. Butterfly/Hourglass Variations — `pattern_10.cpp`

The file contains two versions made from matching star blocks separated by a
variable middle gap:

- `p1`: starts wide, narrows toward the middle, then widens again.
- `p2`: starts narrow, widens toward the middle, then narrows again.

**Simulation for `n = 4`:**

p1 (wide to narrow, then wide):

```text
********
***  ***
**    **
*      *
*      *
**    **
***  ***
********
```

p2 (narrow to wide, then narrow):

```text
*      *
**    **
***  ***
********
********
***  ***
**    **
*      *
```

The exact spacing is produced by `2 * (n - r)` spaces between the two star
blocks.

---

## 11. Hollow Square — `pattern_11.cpp`

The program prints a star only when the current position is on the outside
edge: first row, last row, first column, or last column. Interior positions
are spaces.

**Simulation for `n = 5`:**

```text
*****
*   *
*   *
*   *
*****
```

**Loop idea:** print `*` when `row == 1 || row == n || column == 1 ||
column == n`; otherwise print a space.

---

## 12. Concentric Square Numbers — `pattern_12.cpp`

This pattern fills a square with layers. The outside layer contains `n`, the
next layer contains `n - 1`, and the center contains `1`. For every position,
the program finds the closest distance to an edge and subtracts that distance
from `n`.

**Simulation for `n = 4`:**

```text
4444444
4333334
4322234
4321234
4322234
4333334
4444444
```

**Loop idea:** calculate the distance from the current cell to the top,
bottom, left, and right edges, then use the smallest distance:

```text
value = n - min(distance_to_top,
                distance_to_bottom,
                distance_to_left,
                distance_to_right)
```

---

## Practice Suggestions

- Change the input from `5` to `3`, `4`, and `6` and predict the output first.
- Replace `*` with another character.
- Try changing the row loop direction from increasing to decreasing.
- For number patterns, print the row number, column number, or a shared
  counter and compare the results.
- Add comments beside each loop describing the number of spaces and symbols
  printed on the current row.
