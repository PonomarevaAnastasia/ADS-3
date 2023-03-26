// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
  //  поместить сюда реализацию алгоритма
  return 0; // если ничего не найдено
      int result  = 0;
    for (int j  =  0; j <= size; j++) {
        if (arr[j] == value) {
            result += 1;
        }
    }
    return result;
}

