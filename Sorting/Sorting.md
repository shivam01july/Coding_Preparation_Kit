# Sorting

<img alt="GIF" src="https://github.com/shivam01july/Data-Store/blob/main/Sorting%20Table.PNG"/>

### Bubble Sort
>  - Bubble sort is the simplest sorting algorithm that works by repeatedly swapping the adjacent elements if they are in the wrong order. This algorithm is not suitable for large data sets as its average and worst-case time complexity is quite high.

### Insertion Sort 
>  - Insertion sort is a simple sorting algorithm in this the array is virtually split into a sorted and an unsorted part. Values from the unsorted part are picked and placed at the correct position in the sorted part.   
>  - To sort an array of size N in ascending order iterate over the array and compare the current element (key) to its predecessor, if the key element is smaller than its predecessor, compare it to the elements before. Move the greater elements one position up to make space for the swapped element.

### Slection Sort
>  - Selection sort is a simple and efficient sorting algorithm that works by repeatedly selects the smallest (or largest) element from the unsorted portion of the list and swaps it with the first element of the unsorted part. This process is repeated for the remaining unsorted portion until the entire list is sorted.

### Merge Sort
>  - Merge sort is defined as a sorting algorithm that works by dividing an array into smaller subarrays, sorting each subarray, and then merging the sorted subarrays back together to form the final sorted array.
>  - In simple terms, we can say that the process of merge sort is to divide the array into two halves, sort each half, and then merge the sorted halves back together. This process is repeated until the entire array is sorted.

### Quick Sort
>  - Quick sort is a sorting algorithm based on the Divide and Conquer algorithm that picks an element as a pivot and partitions the given array around the picked pivot by placing the pivot in its correct position in the sorted array.

### Heap Sort
>  - Heap sort is a comparison-based sorting technique based on Binary Heap data structure. It is similar to the selection sort where we first find the minimum element and place the minimum element at the beginning. Repeat the same process for the remaining elements.
>  - **Algorithm:** First convert the array into heap data structure using heapify, then one by one delete the root node of the Max-heap and replace it with the last node in the heap and then heapify the root of the heap. Repeat this process until size of heap is greater than 1.
>    -  Build a heap from the given input array.
>    -  Repeat the following steps until the heap contains only one element:
>        -  Swap the root element of the heap (which is the largest element) with the last element of the heap.
>        -  Remove the last element of the heap (which is now in the correct position).
>        -  Heapify the remaining elements of the heap.
>    -  The sorted array is obtained by reversing the order of the elements in the input array.
