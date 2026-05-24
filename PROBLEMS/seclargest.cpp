int findSecondLargest(int n, vector<int> &arr) {
    if(n < 2) return -1;

    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for(int i=0; i<n; i++){
        if(arr[i] > largest){
            secondLargest = largest;
            largest = arr[i];
        } 
        else if(arr[i] > secondLargest && arr[i] != largest){
            secondLargest = arr[i];
        }
    }

    if(secondLargest == INT_MIN) return -1;
    return secondLargest;
}
