# Function to perform Bubble Sort on the given array/list
def bubbleSort(arr):
    n = len(arr)
    
    # Traverse through all array elements
    for i in range(n):
        
        # Last i elements are already sorted, so we can skip them
        for j in range(n-i-1):
            
            # Swap adjacent elements if they are in the wrong order
            if arr[j] > arr[j+1]:
                arr[j], arr[j+1] = arr[j+1], arr[j]
                

# Reading input values
t = int(input())

for i in range(t):
    n = int(input())
    arr = list(map(int, input().split()))

    # Calling the bubbleSort function
    bubbleSort(arr)

    # Printing the sorted array
    print(*arr)
