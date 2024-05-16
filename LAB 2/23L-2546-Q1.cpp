//#include<iostream>
//using namespace std;
////FUNCTION TO CALCULATE SUM
//int calculateSum(int** arr, int rows, int col) {
//	int sum = 0;
//	for (int i = 0; i < rows; i++) {
//		for (int j = 0; j < col; j++) {
//			sum = sum + arr[i][j];
//		}
//	}
//	return sum;
//}
//int main()
//{
//	int rows = 0, cols = 0;
//	cout << "ENTER NO OF ROWS: ";
//	cin >> rows;
//	cout << "ENTER NO OF COLUMNS: ";
//	cin >> cols;
//	//DYNAMICALLY INPUT FOR 2D ARRAY
//	int** arr = new int* [rows];
//	for (int i = 0; i < rows; i++) {
//		arr[i] = new int[cols];
//		for (int j = 0; j < cols; j++) {
//			cout << "ENTER VALUE FOR POSITION (" << i << "," << j << "): ";
//			cin >> arr[i][j];
//
//		}
//	}
//	//PRINTING 2D ARRAY
//	cout << "2D ARRAY IS: " << endl;
//	for (int i = 0; i < rows; i++) {
//		for (int j = 0; j < cols; j++) {
//			cout << arr[i][j] << " ";
//		}
//		cout << endl;
//	}
//	//SUM
//	int sum = calculateSum(arr, rows, cols);
//	cout << "SUM OF ALL ELEMENTS IN THE ARRAY: " << sum << endl;
//	//MEMORY DE-ALLOCATION
//	for (int i = 0; i < rows; i++) {
//		delete[] arr[i];
//	}
//	delete[] arr;
//	return 0;
//}
