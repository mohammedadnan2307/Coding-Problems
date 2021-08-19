# Problem: Product Triplets

Given **N** integers **‘A′1,A2,…,AN,** count the number of triplets (x,y,z) (with 1≤x<y<z≤**N**) such that at least one of the following is true:

* **Ax=Ay×Az**, and/or
* **Ay=Ax×Az**, and/or
* **Az=Ax×Ay**

## Input
The first line of the input gives the number of test cases, **T. T** test cases follow. Each begins with one line containing an integer **N**: the number of integers in array **A**. The second line consists of **N** integers **Ai**; the i⁠-⁠th of these is the value of the i⁠-⁠th integer, as described above.

## Output
For each test case, output one line containing Case #x: y, where x is the test case number (starting from 1) and y is the number of triplets satisfying the condition given in the problem statement.

## Limits
Time limit: 40 seconds.
Memory limit: 1 GB.
1≤**T**≤30.
0≤**Ai**≤2×105, for all i.

### Test Set 1
3≤**N**≤200.

### Test Set 2
3≤**N**≤7000.

### Sample Input
```
4
6
5 2 4 6 3 1
6
2 4 8 16 32 64
3
1 1 1
3
200000 200000 200000
```

### Sample Output
```
Case #1: 1
Case #2: 6
Case #3: 1
Case #4: 0
```

In Sample Case #1, the only triplet satisfying the condition given in the problem statement is (**2,4,5**). The triplet is valid since the second, fourth, and fifth integers are 2, 6, and 3, and **2×3=6**.

In Sample Case #2, the six triplets satisfying the condition given in the problem statement are: (1,2,3),(1,3,4),(1,4,5),(1,5,6),(2,3,5),(2,4,6).

In Sample Case #3, make sure you only count the triplet (1,2,3) once.

In Sample Case #4, there is no triplet satisfying the condition given in the problem statement since the product of any pair of integers in the array will not be in the array.
