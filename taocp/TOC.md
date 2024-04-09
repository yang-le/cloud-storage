# 1. Basic concepts
## 1.1. Algorithms
## 1.2. Mathematical Preliminaries
### 1.2.1. Mathematical Induction
### 1.2.2. Numbers, Powers, and Logarithms
### 1.2.3. Sums and Products
### 1.2.4. Integer Functions and Elementary Number Theory
### 1.2.5. Permutations and Factorials
### 1.2.6. Binomial Coefficients
### 1.2.7. Harmonic Numbers
### 1.2.8. Fibonacci Numbers
### 1.2.9. Generating Functions
### 1.2.10. Analysis of an Algorithm
### 1.2.11. Asymptotic Representations
#### 1.2.11.1. The O-notation
#### 1.2.11.2. Euler's summation formula
#### 1.2.11.3. Some asymptotic calculations
## 1.3 MMIX
### 1.3.1. Description of MMIX
### 1.3.2. The MMIX Assembly Language
### 1.3.3. Applications to Permutations
## 1.4. Some Fundamental Programming Techniques
### 1.4.1. Subroutines
### 1.4.2. Coroutines
### 1.4.3. Interpretive Routines
#### 1.4.3.1. A MIX simulator
#### 1.4.3.2. Trace routines
### 1.4.4. Input and Output
### 1.4.5. History and Bibliography
# 2. Information Structures
## 2.1. Introduction
## 2.2. Linear Lists
### 2.2.1. Stacks, Queues, and Deques
### 2.2.2. Sequential Allocation
### 2.2.3. Linked Allocation
### 2.2.4. Circular Lists
### 2.2.5. Doubly Linked Lists
### 2.2.6. Arrays and Orthogonal Lists
## 2.3. Trees
### 2.3.1. Traversing Binary Trees
### 2.3.2. Binary Tree Representation of Trees
### 2.3.3. Other Representations of Trees
### 2.3.4. Basic Mathematical Properties of Trees
#### 2.3.4.1. Free trees
#### 2.3.4.2. Oriented trees
#### 2.3.4.3. The "infinity lemma"
#### 2.3.4.4. Enumeration of trees
#### 2.3.4.5. Path length
#### 2.3.4.6. History and bibliography
### 2.3.5. Lists and Garbage Collection
## 2.4. Multilinked Structures
## 2.5. Dynamic Storage Allocation
## 2.6. History and Bibliography
# 3. Random Numbers
## 3.1 Introduction
## 3.2 Generating Uniform Random Numbers
### 3.2.1 The Linear Congruential Method
#### 3.2.1.1 Choice of modulus
#### 3.2.1.2 Choice of multiplier
#### 3.2.1.3 Potency
#### 3.2.2 Other Methods
## 3.3 Statistical Tests
### 3.3.1 General Test Procedures for Studying Random Data
### 3.3.2 Empirical Tests
### *3.3.3 Theoretical Tests
### 3.3.4 The Spectral Test
## 3.4. Other Types of Random Quantities
### 3.4.1. Numerical Distributions
### 3.4.2. Random Sampling and Shuffling
## 3.5. What Is a Random Sequence?
## 3.6. Summary
# 4. Arithmetic
## 4.1. Positional Number Systems
## 4.2. Floating Point Arithmetic
### 4.2.1. Single-Precision Calculations
### 4.2.2. Accuracy of Floating Point Arithmetic
### 4.2.3. Double-Precision Calculations
### 4.2.4. Distribution of Floating Point Numbers
## 4.3. Multiple Precision Arithmetic
### 4.3.1. The Classical Algorithms
### 4.3.2. Modular Arithmetic
### 4.3.3. How Fast Can We Multiply?
## 4.4. Radix Conversion
## 4.5. Rational Arithmetic
### 4.5.1. Fractions
### 4.5.2. The Greatest Common Divisor
### 4.5.3. Analysis of Euclid's Algorithm
### 4.5.4. Factoring into Primes
## 4.6. Polynomial Arithmetic
### 4.6.1. Division of Polynomials
### 4.6.2. Factorization of Polynomials
### 4.6.3. Evaluation of Powers
### 4.6.4. Evaluation of Polynomials
## 4.7. Manipulation of Power Series
# 5. Sorting
## *5.1 Combinatorial Properties of Permutations
### *5.1.1 Inversions
### *5.1.2 Permutations of a Multiset
### *5.1.3 Runs
### *5.1.4 Tableaux and Involutions
## 5.2 Internal sorting
### 5.2.1 Sorting by Insertion
### 5.2.2 Sorting by Exchanging
### 5.2.3 Sorting by Selection
### 5.2.4 Sorting by Merging
### 5.2.5 Sorting by Distribution
## 5.3 Optimum Sorting
### 5.3.1. Minimum-Comparison Sorting
### 5.3.2. Minimum-Comparison Merging
### 5.3.3. Minimum-Comparison Selection
### 5.3.4. Networks for Sorting
## 5.4. External Sorting
### 5.4.1. Multiway Merging and Replacement Selection
### 5.4.2. The Polyphase Merge
### 5.4.3. The Cascade Merge
### 5.4.4. Reading Tape Backwards
### 5.4.5. The Oscillating Sort
### 5.4.6. Practical Considerations for Tape Merging
### 5.4.7. External Radix Sorting
### 5.4.8. Two-Tape Sorting
### 5.4.9. Disks and Drums
## 5.5. Summary, History, and Bibliography
# 6. Searching
## 6.1. Sequential Searching
## 6.2. Searching by Comparison of Keys
### 6.2.1. Searching an Ordered Table
### 6.2.2. Binary Tree Searching
### 6.2.3. Balanced Trees
### 6.2.4. Multiway Trees
## 6.3. Digital Searching
## 6.4. Hashing
## 6.5. Retrieval on Secondary Keys
# 7. Combinatorial Searching (0a, begin of Volume 4A)
## 7.1. Zeros and Ones (0b)
### 7.1.1. Boolean Basics (0b)
### 7.1.2. Boolean evaluation (0c)
### 7.1.3. Bitwise tricks and techniques (1a)
### 7.1.4. Binary decision diagrams (1b)
## 7.2. Generating all possibilities (2a)
### 7.2.1. Generating Basic Combinatorial Patterns (2a)
#### 7.2.1.1. Generating all n-tuples (2a)
#### 7.2.1.2. Generating all permutations (2b)
#### 7.2.1.3. Generating all combinations (3a)
#### 7.2.1.4. Generating all partitions (3b)
#### 7.2.1.5. Generating all set partitions (3b)
#### 7.2.1.6. Generating all trees (4a)
#### 7.2.1.7. History and further references (4b, end of Volume 4A)
(5a, begin of Volume 4B)
### 7.2.2. Backtrack Programming (5b)
#### 7.2.2.1. Dancing Links (5c)
#### 7.2.2.2. Satisfiability (6a, end of Volume 4B)
#### 7.2.2.3. Constraint satisfaction (7a, begin of Volume 4C)
#### 7.2.2.4. Hamiltonian paths and cycles (8a)
#### 7.2.2.5. Cliques (8b)
#### 7.2.2.6. Covers
#### 7.2.2.7. Squares
#### 7.2.2.8. A potpourri of puzzles (9b)
#### 7.2.2.9. Estimating backtrack costs (9c)
### 7.2.3. Generating inequivalent patterns
## 7.3. Shortest paths
## 7.4. Graph algorithms
### 7.4.1. Components and traversal (12a)
### 7.4.2. Special classes of graphs
### 7.4.3. Expander graphs
### 7.4.4. Random graphs
## 7.5. Graphs and optimization
### 7.5.1. Bipartite matching (14a)
### 7.5.2. The assignment problem
### 7.5.3. Network flows
### 7.5.4. Optimum subtrees
### 7.5.5. Optimum matching
### 7.5.6. Optimum orderings
## 7.6. Independence theory
### 7.6.1. Independence structures
### 7.6.2. Efficient matroid algorithms
## 7.7. Discrete dynamic programming
## 7.8. Branch-and-bound techniques
## 7.9. Herculean tasks (aka NP-hard problems)
## 7.10. Near-optimization
# 8. Recursion (16a)
# 9. Lexical scanning
# 10. Parsing techniques
# 11. Mathematical Linguistics
# 12. Programming Language Translation