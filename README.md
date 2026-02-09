# Linear Search Algorithm (C++)
C++ implementation, pseudocode, and activity diagram for DSA assignment.
This project implements the Linear Search algorithm in C++ and includes pseudocode and an activity diagram description for a Data Structures and Algorithms assignment. The algorithm checks each element of an array sequentially to find a target value.
## Algorithm Description
Linear Search solves the problem of locating a specific value in an unsorted array. It examines elements one by one until the target is found or the array ends.
## Pseudocode
Input: array of numbers, size n, target value x
Output: index of x if found, otherwise -1

for i from 0 to n−1 do
    if array[i] == x then
        return i
    end if
end for

return -1
