//#include<iostream>
//using namespace std;
////FUNCTION FOR TRANSPOSE
//void TranposedArray(int** arr, int rows, int col) {
//	int **trans = new int* [rows];
//	for (int i = 0; i < col; i++) {
//		trans[i] = new int[rows];
//		for (int j = 0; j < rows; j++) {
//			trans[i][j] = arr[j][i];//CHANGING ROWS INTO COLUMN AND COLUMN INOT ROWS OF 2D ARRAY
//		}
//	}
//	cout << "TRANSPOSED ARRAY: " << endl;
//	for (int i = 0; i < col; i++) {
//		for (int j = 0; j < rows; j++) {
//			cout << trans[i][j] << " ";
//		}
//		cout << endl;
//	}
//	for (int i = 0; i < col; i++) {
//		delete[] trans[i];
//	}
//	delete[] trans;
//}
//int main()
//{
//	int rows = 0, cols = 0;
//	cout << "ENTER NO OF ROWS: ";
//	cin >> rows;
//	cout << "ENTER NO OF COLS: ";
//	cin >> cols;
//	//DYNAMICALLY INPUT FOR 2D ARRAYS
//	int** arr = new int*[rows];
//	for (int i = 0; i < rows; i++) {
//		arr[i] = new int[cols];
//		for (int j = 0; j < cols; j++) {
//			cout << "ENTER VALUE FOR POSITION (" << i << "," << j << "): ";
//			cin >> arr[i][j];
//
//		}
//
//	}
//	//OUTPUT OF ORIGINAL ARRAY
//	cout << "ORIGINAL ARRAY: " << endl;
//	for (int i = 0; i < rows; i++) {
//		for (int j = 0; j < cols; j++) {
//			cout << arr[i][j] << " ";
//		}
//		cout << endl;
//	}
//	//FUNCTION CALLING
//	TranposedArray(arr, rows, cols);
//	//MEMORY DE-ALLOCATION
//	for (int i = 0; i < rows; i++) {
//		delete[] arr[i];
//	}
//	delete[] arr;
//	return 0;
//}
