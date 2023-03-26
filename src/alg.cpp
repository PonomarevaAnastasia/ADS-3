// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
  //  поместить сюда реализацию алгоритма
  return 0; // если ничего не найдено
bool Obj = false;
   int n = 0;
    int p = size - 1;
    int count = 0;
    int mid;
    while (flag != true) {
        mid = (n + p) / 2;
        if (arr[mid] == value) {
            int i = mid;
            while (arr[i] == value) {
                count++;
                i--;
            }
            while (arr[mid + 1] == value) {
                count++;
                mid++;
            }
            flag = true;
        }
        if (arr[mid] > value) {
            p = mid;
        }
      } else {
           n = mid;
        }
        if (n == mid && mid == (p - 1))
            break;
    }
    return count;
    return 0; // если ничего не найдено
}
