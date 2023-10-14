*** Stability in Sorting Algorithm ***

int arr[] = {("Anil",50),("Ayan",80),("Piyush",50),("Ramesh",50)};

<!-- Stable Algorithm -->
## Output : {("Anil",50),("Piyush",50),("Ayan",80),("Ramesh",50)}

### Stability is used when more than one filed is persent. But in integer array stability is not used.

<!-- Unstable Algorithm -->
## Output : {("Piyush",50),("Anil",50),("Ayan",80),("Ramesh",50)}

### Example of Stable Algorithm : Bubble Sort, Insertion Sort, Merge Sort.....

### Example of Unstable Algorithm : Selection Sort, Quick Sort, Heap Sort ....

#### Example of Selection Sort : 18,4,3,8,3

Step-1 : 3, 4, 3, 8, 18
Step-2 : 3, 3, 4, 8, 18
Step-3 : 3, 3, 4, 8, 18