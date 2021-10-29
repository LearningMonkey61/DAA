
# Design and Analysis of Algorithims

## a thorough course in the art of programming

### (really a test of my consistency)

# Lab #1

#### 23-01-2020

Questions


  * solution : [sqrntnum.cpp](https://github.com/LearningMonkey61/DAA/blob/master/sqrtnum.cpp)
* Missing Number in Arithmetic Progression
  * Given an array that represents elements of arithmetic progression in order, one element is missing in the progression, which you need to find.
  * solution : [apcompletion.cpp](https://github.com/LearningMonkey61/DAA/blob/master/apcompletion.cpp)
* Number of days after which tank will become empty
  * Given a tank with capacity C litres which is completely filled in starting, every day the tank is filled with l litres of water and in the case of overflow extra water is thrown out. Now on i-th day, ‘i’ litres of water is taken out for drinking. We need to find out the day at which tank will become empty the first time.
* Longest Common Prefix
  * Given a set of strings, find the longest common prefix.
  * solution : [longestprefix.cpp](https://github.com/LearningMonkey61/DAA/blob/master/longestprefix.cpp)
* The Skyline Problem
  * Given n rectangular buildings in a 2-dimensional city, computes the skyline of these buildings, eliminating hidden lines. The main task is to view buildings from a side and remove all sections that are not visible.
  * All buildings share common bottom and every building is represented by triplet (left, ht, right)
  * ‘left’: is x coordinated of left side (or wall).
  * ‘right’: is x coordinate of right side
  * ‘ht’: is height of building.
  * A skyline is a collection of rectangular strips. A rectangular strip is represented as a pair (left, ht) where left is x coordinate of left side of strip and ht is height of strip.
  * solution : [skyline.cpp](https://github.com/LearningMonkey61/DAA/blob/master/skyline.cpp)

# Lab #2 & 3

#### 06-02-2020

Questions

* Number of rotations in circular array
  * Given a circularly sorted array, find the extent of rotation of the array Assume no duplicates and anti-clockwise rotation
  * Input – [8, 9, 10, 2, 5, 7]
  * Output – Rotation extent = 3
  * solution :  [rotation.cpp](https://github.com/LearningMonkey61/DAA/blob/master/rotation.cpp)
* Search in nearly sorted array in minimum time
  * Given a nearly sorted array (degree of misplaced element is no more than one position from correct place), efficiently search an element in it.
  * Input – [2, 1, 3, 4, 5, 6, 7, 8, 9]; 5
  * Output – Position of 5 = 4th (or index = 3)
  * solution :  [nearlysorted.cpp](https://github.com/LearningMonkey61/DAA/blob/master/nearlysorted.cpp)
* Efficient implementation of power function in recursive manner
  * Input – x = some number, n = some exponent
  * Output – x^n
* Perform ternary search
* Merge sort of linked list
  * solution :  [mergesort.cpp](https://github.com/LearningMonkey61/DAA/blob/master/mergesort.cpp)
* Quicksort
  * solution : [quicksort.cpp](https://github.com/LearningMonkey61/DAA/blob/master/quicksort.cpp)
* Towers of Hanoi
  * solution : [towerofhanoi.cpp](https://github.com/LearningMonkey61/DAA/blob/master/towerofhanoi.cpp)
* K-th largest element in unsorted array
* Search an element in a 2D array with efficiency
  * solution : [2darraysearch.cpp](https://github.com/LearningMonkey61/DAA/blob/master/2darraysearch.cpp)
* Beautiful Array
  * For some fixed N, an array A is beautiful if it is a permutation of the integers 1, 2, ..., N, such that: For every i < j, there is no k with i < k < j such that A[k]* 2 = A[i] + A[j].
  * Given N, return any beautiful array A.  (It is guaranteed that one exists.)
* Given a set of points, find the closest pair (having shortest distance between them)
* Implement Strassen’s algorithm
* Perform heapsort for the given data
  * solution : [heapsort.cpp](https://github.com/LearningMonkey61/DAA/blob/master/heapsort.cpp)
* Find greatest common divisor of two numbers using Divide and Conquer approach
  * trivial : use euclid's algorithim.

  * ```cpp
    int gcd(int a, int b){
      if (a == 0) return b;
      return gcd(b % a, a);
    }
      ```

# Lab #4

#### 13-02-2020

Questions

* Inversion Count of an Array
  * Inversion Count for an array indicates – how far (or close) the array is from being sorted. If array is already sorted then inversion count is 0. If array is sorted in reverse order that inversion count is the maximum.
  * Formally speaking, two elements a[i] and a[j] form an inversion if a[i] &gt; a[j] and i &lt; j
  * Example : The sequence 2, 4, 1, 3, 5 has three inversions (2, 1), (4, 1), (4, 3).
* Multiply two polynomials
* Find the maximum element in an array which is first increasing and then decreasing
* Binary Search on Singly Linked List
* Given three numbers x, y, and p, find the modular exponent (x^y)%p

# Lab #5

#### 12-03-2020

Questions

* Longest Common Subsequence
    LCS Problem Statement: Given two sequences, find the length of longest subsequence present in both of them. A subsequence is a sequence that appears in the same relative order, but not necessarily contiguous. For example, “abc”, “abg”, “bdf”, “aeg”, ‘”acefg”, .. etc are subsequences of “abcdefg”.
     * solution :  [lcs.cpp](./lcs.cpp)

*	Matrix Chain Multiplication
    Given an array p[] which represents the chain of matrices such that the ith matrix Ai is of dimension p[i-1] x p[i]. We need to write a function MatrixChainOrder() that should return the minimum number of multiplications needed to multiply the chain.

*	Zero-One Knapsack
    Given weights and values of n items, put these items in a knapsack of capacity W to get the maximum total value in the knapsack. In other words, given two integer arrays val[0..n-1] and wt[0..n-1] which represent values and weights associated with n items respectively. Also given an integer W which represents knapsack capacity, find out the maximum value subset of val[] such that sum of the weights of this subset is smaller than or equal to W. You cannot break an item, either pick the complete item, or don’t pick it (0-1 property).

* Binomial Coefficient
    Write a function that takes two parameters n and k and returns the value of Binomial Coefficient C(n, k). For example, your function should return 6 for n = 4 and k = 2, and it should return 10 for n = 5 and k = 2.

*	Coin change dispenser
    Given a value N, if we want to make change for N cents, and we have infinite supply of each of S = { S1, S2, .. , Sm} valued coins, how many ways can we make the change? The order of coins doesn’t matter.
    For example, for N = 4 and S = {1,2,3}, there are four solutions: {1,1,1,1},{1,1,2},{2,2},{1,3}. So output should be 4. For N = 10 and S = {2, 5, 3, 6}, there are five solutions: {2,2,2,2,2}, {2,2,3,3}, {2,2,6}, {2,3,5} and {5,5}. So the output should be 5.

*	Assembly Line Scheduling
    A car factory has two assembly lines, each with n stations. A station is denoted by Si,j where i is either 1 or 2 and indicates the assembly line the station is on, and j indicates the number of the station. The time taken per station is denoted by ai,j. Each station is dedicated to some sort of work like engine fitting, body fitting, painting and so on. So, a car chassis must pass through each of the n stations in order before exiting the factory. The parallel stations of the two assembly lines perform the same task. After it passes through station Si,j, it will continue to station Si,j+1 unless it decides to transfer to the other line. Continuing on the same line incurs no extra cost, but transferring from line i at station j – 1 to station j on the other line takes time ti,j. Each assembly line takes an entry time ei and exit time xi which may be different for the two lines. Give an algorithm for computing the minimum time it will take to build a car chassis.

Greedy Approach

* Fractional Knapsack
    * Given weights and values of n items, we need to put these items in a knapsack of capacity W to get the maximum total    value in the knapsack.
    * In the 0-1 Knapsack problem, we are not allowed to break items. We either take the whole item or don’t take it.
    In Fractional Knapsack, we can break items for maximizing the total value of knapsack. This problem in which we can     break an item is also called the fractional knapsack problem.

* Egyptian Fraction
    *Every positive fraction can be represented as sum of unique unit fractions. A fraction is unit fraction if numerator is 1 and denominator is a positive integer, for example 1/3 is a unit fraction. Such a representation is called Egyptian Fraction as it was used by ancient Egyptians.
