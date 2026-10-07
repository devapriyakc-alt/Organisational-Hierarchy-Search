# Organisational Hierarchy and Department Search
## Data Structures and Algorithms Assignment – Question 5
## Project Overview

This project represents a company's organisational hierarchy using a tree data structure. The hierarchy is constructed using the First-Child/Next-Sibling representation and displayed using Level-Order Traversal.

The project also compares Linear Search and Binary Search for locating departments.

## Organisational Hierarchy

The hierarchy is:

```text
CEO
├── HR
├── Finance
└── IT
    ├── Development
    │   ├── Frontend
    │   └── Backend
    └── Testing
```
## Features

- Construction of an organisational tree
- First-Child/Next-Sibling representation
- Level-Order Traversal
- Linear Search
- Binary Search
- Comparison counting
- Complexity analysis

## Level-Order Traversal

The output of the level-order traversal is:

CEO HR Finance IT Development Testing Frontend Backend

## Search Comparison

| Department | Linear Search | Binary Search |
|---|---:|---:|
| HR | 5 | 3 |
| Testing | 7 | 3 |
| Backend | 1 | 3 |

## Tree Analysis

The height of the tree is 3 edges and it contains 4 levels.

## Complexity

### Level-Order Traversal
Time Complexity: O(n)  
Space Complexity: O(n)

### Linear Search
Best Case: O(1)  
Average Case: O(n)  
Worst Case: O(n)

### Binary Search
Best Case: O(1)  
Average Case: O(log n)  
Worst Case: O(log n)

## Conclusion

The tree representation is suitable for organisational reporting because it clearly represents the hierarchical relationship between departments.

The sorted array is suitable for department searching because Binary Search provides efficient searching, especially when the number of departments increases.
