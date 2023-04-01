// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
  //  поместить сюда реализацию алгоритма
  return 0; // если ничего не найдено
   int left = 0;
    int right = size - 1;
    int count = 0;
    while (right >= left) {
        int mid = (right + left) / 2;
        if (*(arr + mid) == value) {
            count += 1;
            int newmid = mid;
            while ((*(arr + mid + 1)) == value) {
                count += 1;
                mid += 1;
            }
            while ((*(arr + newmid - 1)) == value) {
                count += 1;
                newmid -= 1;
            }
            return count;
        } else if (*(arr + mid) > value) {
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }
    return count;
}
