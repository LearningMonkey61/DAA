
# Design and Analysis of Algorithims

## a thorough course in the art of programming

### (really a test of my consistency)

# Lab #1

#### 23-01-2020

Questions

1. Square Root of a Number
        * Given an integer x, find square root of it. If x is not a perfect square, then return floor(√x).
        * solution : [sqrntnum.cpp](https://github.com/LearningMonkey61/DAA/blob/master/sqrntnum.cpp)

2. Missing Number in Arithmetic Progression
        * Given an array that represents elements of arithmetic progression in order, one element is missing in the progression, which you need to find.
        * solution : [apcompletion.cpp](https://github.com/LearningMonkey61/DAA/blob/master/apcompletion.cpp)

3. Number of days after which tank will become empty
        * Given a tank with capacity C litres which is completely filled in starting, every day the tank is filled with l litres of water and in the case of overflow extra water is thrown out. Now on i-th day, ‘i’ litres of water is taken out for drinking. We need to find out the day at which tank will become empty the first time.

4. Longest Common Prefix
        * Given a set of strings, find the longest common prefix.
        * solution : [longestprefix.cpp](https://github.com/LearningMonkey61/DAA/blob/master/longestprefix.cpp)

5. The Skyline Problem
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

1. Number of rotations in circular array
        * Given a circularly sorted array, find the extent of rotation of the array Assume no duplicates and anti-clockwise rotation
        * Input – [8, 9, 10, 2, 5, 7]
        * Output – Rotation extent = 3
        * solution :  [rotation.cpp](https://github.com/LearningMonkey61/DAA/blob/master/rotation.cpp)

2. Search in nearly sorted array in minimum time
        * Given a nearly sorted array (degree of misplaced element is no more than one position from correct place), efficiently search an element in it.
        * Input – [2, 1, 3, 4, 5, 6, 7, 8, 9]; 5
        * Output – Position of 5 = 4th (or index = 3)
        * solution :  [nearlysorted.cpp](https://github.com/LearningMonkey61/DAA/blob/master/nearlysorted.cpp)

3. Efficient implementation of power function in recursive manner
        * Input – x = some number, n = some exponent
        * Output – x^n
4. Perform ternary search
5. Merge sort of linked list
        * solution :  [mergesort.cpp](https://github.com/LearningMonkey61/DAA/blob/master/mergesort.cpp)
6. Quicksort
7. Towers of Hanoi
8. K-th largest element in unsorted array
9. Search an element in a 2D array with efficiency
10. Beautiful Array
        * For some fixed N, an array A is beautiful if it is a permutation of the integers 1, 2, ..., N, such that: For every i < j, there is no k with i < k < j such that A[k]* 2 = A[i] + A[j].
        * Given N, return any beautiful array A.  (It is guaranteed that one exists.)
11. Given a set of points, find the closest pair (having shortest distance between them)
12. Implement Strassen’s algorithm
13. Perform heapsort for the given data
14. Find greatest common divisor of two numbers using Divide and Conquer approach
