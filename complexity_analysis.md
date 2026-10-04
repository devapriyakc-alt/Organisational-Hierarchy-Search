# Complexity Analysis

## 1. Level-Order Traversal

Level-order traversal visits every node in the organisational tree once.

- Time Complexity: O(n)
- Space Complexity: O(n)

## 2. Linear Search

Linear Search checks each department one by one until the required department is found.

- Best Case: O(1)
- Average Case: O(n)
- Worst Case: O(n)
- Space Complexity: O(1)

## 3. Binary Search

Binary Search works on the sorted department array and repeatedly divides the search range into two halves.

- Best Case: O(1)
- Average Case: O(log n)
- Worst Case: O(log n)
- Space Complexity: O(1)

## 4. Tree Height

The height of the organisational tree is 3 edges.

The longest path is:

CEO → IT → Development → Frontend

Therefore:

- Tree Height = 3
- Number of Levels = 4

## Conclusion

The tree representation is suitable for organisational reporting because it clearly represents the hierarchy and supports level-order traversal.

The sorted array is suitable for department searching because Binary Search provides faster searching than Linear Search for larger datasets.
