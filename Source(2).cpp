//#include<iostream>
//using namespace std;
//class Matrix {
//private:
//    int** m_data;
//    int m_rows;
//    int m_cols;
//
//public:
//    // Default constructor
//    Matrix() : m_data(nullptr), m_rows(0) {}
//
//    // Destructor
//    ~Matrix() {
//        // Free the memory allocated for the matrix
//        if (m_data != nullptr) {
//            for (int i = 0; i < m_rows; i++) {
//                delete[] m_data[i];
//            }
//            delete[] m_data;
//        }
//    }
//
//    // Getters and setters
//    int** getData() const { return m_data; }
//    int getDimension() const { return m_rows; }
//
//    void setData(int** data) { m_data = data; }
//    void setDimension(int rows, int cols) { m_rows = rows; m_cols = cols; }
//
//    // InputMatrix function
//    void InputMatrix(int row,int cols) {
//        // Allocate memory for the matrix
//        m_data = new int* [row];
//        for (int i = 0; i < cols; i++) {
//            m_data[i] = new int[cols];
//        }
//
//        // Take input from user
//        std::cout << "Enter the values of the matrix:\n";
//        for (int i = 0; i < row; i++) {
//            for (int j = 0; j < cols; j++) {
//                std::cout << "Element [" << i << "][" << j << "]: ";
//                std::cin >> m_data[i][j];
//            }
//        }
//
//        // Save the dimension of the matrix
//        m_rows = row;
//        m_cols = cols;
//    }
//
//    // DisplayMatrix function
//    void DisplayMatrix() const {
//        std::cout << "Matrix:\n";
//        for (int i = 0; i < m_rows; i++) {
//            for (int j = 0; j < m_cols; j++) {
//                std::cout << m_data[i][j] << "\t";
//            }
//            std::cout << "\n";
//        }
//    }
//    void RotateMatrix( int rows, int cols) {
//        int top = 0, bottom = rows - 1, left = 0, right = cols - 1;
//        int prev, curr;
//        while (top < bottom && left < right) {
//            // Store the top-left element of the layer in prev
//            prev = m_data[top + 1][left];
//
//            // Move the top row of the layer one step to the left
//            for (int i = left; i <= right; i++) {
//                curr = m_data[top][i];
//                m_data[top][i] = prev;
//                prev = curr;
//            }
//            top++;
//
//            // Move the right column of the layer one step up
//            for (int i = top; i <= bottom; i++) {
//                curr = m_data[i][right];
//                m_data[i][right] = prev;
//                prev = curr;
//            }
//            right--;
//
//            // Move the bottom row of the layer one step to the right
//            for (int i = right; i >= left; i--) {
//                curr = m_data[bottom][i];
//                m_data[bottom][i] = prev;
//                prev = curr;
//            }
//            bottom--;
//
//            // Move the left column of the layer one step down
//            for (int i = bottom; i >= top; i--) {
//                curr = m_data[i][left];
//                m_data[i][left] = prev;
//                prev = curr;
//            }
//            left++;
//        }
//    }
//    //void RotateMatrix(int rows, int cols) {
//    //    int top = 0, bottom = rows - 1, left = 0, right = cols - 1;
//    //    int prev, curr;
//
//    //    while (top < bottom && left < right) {
//    //        // Store the top-left element of the layer in prev
//    //        prev = m_data[top][left];
//
//    //        // Move the top row of the layer one step to the right
//    //        for (int i = left; i <= right; i++) {
//    //            curr = m_data[top][i];
//    //            m_data[top][i] = prev;
//    //            prev = curr;
//    //        }
//    //        top++;
//
//    //        // Move the right column of the layer one step down
//    //        for (int i = top; i <= bottom; i++) {
//    //            curr = m_data[i][right];
//    //            m_data[i][right] = prev;
//    //            prev = curr;
//    //        }
//    //        right--;
//
//    //        // Move the bottom row of the layer one step to the left
//    //        for (int i = right; i >= left; i--) {
//    //            curr = m_data[bottom][i];
//    //            m_data[bottom][i] = prev;
//    //            prev = curr;
//    //        }
//    //        bottom--;
//
//    //        // Move the left column of the layer one step up
//    //        for (int i = bottom; i >= top; i--) {
//    //            curr = m_data[i][left];
//    //            m_data[i][left] = prev;
//    //            prev = curr;
//    //        }
//    //        left++;
//    //    }
//    //}
//
//
//};
//int main() {
//    // Take input from user
//    int rows=0,cols=0;
//    std::cout << "Enter the rows of the matrix: ";
//    std::cin >> rows;
//    cols = rows;
//    // Create a Matrix object
//    Matrix mat;
//
//    // Input the matrix
//    mat.InputMatrix(rows,cols);
//
//    // Display the matrix
//    mat.DisplayMatrix();
//    mat.RotateMatrix(rows, cols);
//    mat.DisplayMatrix();
//    return 0;
//}
