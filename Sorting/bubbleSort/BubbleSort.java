class BubbleSort{

    public static void printArr(int arr[]){
        for(int i = 0; i < arr.length; i++){
            System.out.print(arr[i] + " ");
        }
    }

    public static void main(String[] args) {
        int arr[] = {8,5,6,5,4,3,9};


        //bubble sort
        for(int i = 0;i<arr.length-1;i++) {
            for(int j = 0; j<arr.length-i-1;j++){
                if(arr[j]>arr[j+1]){
                    int temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                }
            }
        }

        printArr(arr);
    }
}


//BubbleSort Time Complexity is 0(n^2)