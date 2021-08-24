# Problem: Longest Path

You are given a tree consisting of **N** nodes, numbered from 0 to N-1. Each node contains one of the letters '**a**' or '**b**'.

The tree is represented as an array **A** of length **N**. **A[K]** (for K from 0 to N-1) denotes the parent of the **K**-th node. Node 0 is the root node and does not have a parent, so the value corresponding to it in array **A** will always be -1. Letters in nodes are represented as a string **S**. **S[K]** (for X from 0 to N-1) denotes the letter in the **K**-th node.

For example, S = "abbab" and A = [-1, 0, 0, 0, 2] represents a tree made of five vertices it contains following edges: 0-1,0-2,0-3,2-4. The picture below illustrates the tree.

![1](https://user-images.githubusercontent.com/55001351/130613867-e4edec44-00cf-4f99-9985-d3646d113c2f.JPG)

Your task is to find the number of vertices on the longest path in the tree, such that no pair of adjacent vertices on the path would contain the same letter.

Write a function:

**int solution(string s, vector**<int> a)**

that, given string S and array A of N integers, returns an integer representing the number of vertices on the longest path in which no two consecutive vertices contain the same letter.

## Example 1:

Given S = "ab" and A = [-1, 0] your function should return 2. The longest path is: 0-1. It is marked in red on the picture.

![22](https://user-images.githubusercontent.com/55001351/130614727-a11c40a0-cd27-43b5-a38d-43d3281568ac.jpg)

## Example 2:

Given S = "abbab' and A = [-1, 0, 0, 0, 2], your function should return 3. The longest path is 1-0-2. It is marked in red on the picture.
  
![33](https://user-images.githubusercontent.com/55001351/130615055-aff9c6bc-78e6-4503-81a4-a8031d29a93e.jpg)

## Example 3:
  
Given S = "abab' and A = [-1, 2, 0, 1], your function should return 2. The longest path is: 2-1. It is marked in red on the picture.
  
![44](https://user-images.githubusercontent.com/55001351/130615375-3313571f-7b1b-4191-bad4-afe663ac5c5c.jpg)

Write an efficient algorithm for the following assumptions:

* N is an integer within the range [1, 40,000].
* String S consists only of the characters "a" and/or "b".
* String S and array A are both of length N.
* Array A defines a proper tree with a root in node 0.
