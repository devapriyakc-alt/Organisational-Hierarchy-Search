# Search Trace Table

| Department | Linear Search Comparisons | Binary Search Comparisons |
|------------|---------------------------|----------------------------|
| HR         | 5                         | 3                          |
| Testing    | 7                         | 3                          |
| Backend    | 1                         | 3                          |

## Observation

Linear Search checks departments one by one from the beginning.

Binary Search repeatedly divides the sorted list into two halves.

For the selected searches, Binary Search uses fewer or equal comparisons than Linear Search, except when the required department is found immediately by Linear Search.
