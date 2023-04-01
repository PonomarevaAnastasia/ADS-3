// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
  int left = 0;
  int right = size - 1;
  int count = 0;
  while (left <= right) {
    int mid = (left + right) / 2;
    if (arr[mid] < value) {
      left = mid + 1;
    } else if (arr[mid] > value) {
      right = mid - 1;
    } else if (arr[mid] == value) {
      count++;
      int newmid = mid - 1;
      while (arr[newmid] == value && newmid >= start) {
        count++;
        newmid--;
      }
      newmid = mid + 1;
      while (arr[newmid] == value && newmid <= end) {
        count++;
        newmid++;
      }
      return count;
    }
  }
    
  return 0; // если ничего не найдено
}
