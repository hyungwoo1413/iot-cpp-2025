//#include <iostream>
//#include <cstdlib>
//using namespace std;
//
//int main() {
//    int size;
//
//    cout << "배열 크기: ";
//    cin >> size;
//
//    int* arr = (int*)malloc(size * sizeof(int));
//
//    if (arr == NULL) {
//        cout << "메모리 할당 실패!" << endl;
//        return 1;
//    }
//
//    for (int i = 0; i < size; i++) {
//        cout << "원소를 입력하세요(" << i + 1 << "/" << size << "): ";
//        cin >> arr[i];
//    }
//
//    cout << "출력: ";
//    for (int i = 0; i < size; i++) {
//        cout << arr[i] << " ";
//    }
//    cout << endl;
//
//    free(arr);
//
//    return 0;
//}
