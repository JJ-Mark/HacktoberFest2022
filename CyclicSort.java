import java.util.Arrays;

public class CyclicSort {
    public static void main(String[] args) {

        int arr[] = { 4, 3, 1, 5, 2 };
        cyclic_sort(arr, arr.length);

        System.out.println(Arrays.toString(arr));
    }

    static void cyclic_sort(int[] arr, int n) {

        int i = 0;
        while (i < n) {
            int corrextInd = arr[i] - 1;
            if (arr[corrextInd] != arr[i]) {
                int temp = arr[corrextInd];
                arr[corrextInd] = arr[i];
                arr[i] = temp;
            } else {
                i++;
            }
        }
    }
}
