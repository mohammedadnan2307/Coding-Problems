# Problem: Longest Path

You are given a tree consisting of **N** nodes, numbered from 0 to N-1. Each node contains one of the letters '**a**' or '**b**',

The tree is represented as an array **A** of length **N**. **A[K]** (for K from 0 to N-1) denotes the parent of the K-th node. Node 0 is the root node and does not have a parent, so the value corresponding to it in array A will always be -1. Letters in nodes are represented as a string S. S[K] (for X from 0 to N-1) denotes the letter in the K-th node.

For example, S = "abbab" and A = [-1, 0, 0, 0, 2] represents a tree made of five vertices it contains following edges: 0-1,0-2,0-3,2-4. The picture below illustrates the tree
![1](https://user-images.githubusercontent.com/55001351/130613867-e4edec44-00cf-4f99-9985-d3646d113c2f.JPG)
