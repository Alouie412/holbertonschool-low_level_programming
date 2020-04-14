# Search Algorithms

Implement various search algorithms to find our target value, if it exists.

## Files in This Repository
| File Name | Description |
| --- | --- |
|[search_algos.h](https://github.com/Alouie412/holbertonschool-low_level_programming/blob/master/0x1E-search_algorithms/search_algos.h) | Header file. Contains function prototypes and inclusion of certain C libraries. Include guarded |
|[0-linear.c](https://github.com/Alouie412/holbertonschool-low_level_programming/blob/master/0x1E-search_algorithms/0-linear.c) | File that implements linear search by going through each index of the array, starting at the beginning, until the target value is found. If by chance the target value appears more than once, return only the first instance. If the target value is not found, return -1 |
|[1-binary.c](https://github.com/Alouie412/holbertonschool-low_level_programming/blob/master/0x1E-search_algorithms/1-binary.c) | File that implements binary search by dividing the array in half until either the target value is landed on or isolated. If the target value is not found, return -1 |
|[2-O](https://github.com/Alouie412/holbertonschool-low_level_programming/blob/master/0x1E-search_algorithms/2-O) | File that contains the answer to the following question: What is the worst-case scenario time complexity of a linear search? |
|[3-O](https://github.com/Alouie412/holbertonschool-low_level_programming/blob/master/0x1E-search_algorithms/3-O) | File that contains the answer to the following question: What is the worst-case scenario space complexity of a linear search? |
|[4-O](https://github.com/Alouie412/holbertonschool-low_level_programming/blob/master/0x1E-search_algorithms/4-O) | File that contains the answer to the following question: What is the worst-case scenario time complexity of a binary search? |
|[5-O](https://github.com/Alouie412/holbertonschool-low_level_programming/blob/master/0x1E-search_algorithms/5-O) | File that contains the answer to the following question: What is the worst-case scenario space complexity of a binary search? |
|[6-O](https://github.com/Alouie412/holbertonschool-low_level_programming/blob/master/0x1E-search_algorithms/6-O) | File that contains the answer to the space complexity of the given code that utilizes a loop within another loop and calling malloc with 2 passed in integer arguments |
|[100-jump.c](https://github.com/Alouie412/holbertonschool-low_level_programming/blob/master/0x1E-search_algorithms/100-jump.c) | File that implements jump search by skipping indexes in the array, backtracking if the value was passed, then performing linear search to find the target value. If the target value is not found, return -1 |
|[101-O](https://github.com/Alouie412/holbertonschool-low_level_programming/blob/master/0x1E-search_algorithms/101-O) | File that contains the answer to the following question: What is the average-case scenario time complexity of a jump search of array of size n and using jump = sqrt(n)? |
