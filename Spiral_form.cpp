#include <iostream>

int main()
{
    int t;
    std::cin >> t;
    while (t--)
    {

        int row, col;
        std::cin >> row >> col;
        int x = row, y = col;
        int a[row + 5][col + 5];

        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                std::cin >> a[i][j];
            }
        }

        int tmpRow = 0, tmpCol = 0;
        int prev, curr;

        while (tmpRow < row && tmpCol < col)
        {
            if(tmpRow + 1 == row || tmpCol+1 == col)
                break;
                
            prev = a[tmpRow+1][tmpCol];

            for (int i = tmpCol; i < col; i++)
            {
                //std::cout << a[tmpRow][i] << " ";
                curr = a[tmpRow][i];
                a[tmpRow][i]=prev;
                prev = curr;
            }
            tmpRow++;

            for (int i = tmpRow; i < row; i++)
            {
                //std::cout << a[i][col - 1] << " ";
                curr = a[i][col-1];
                a[i][col-1] = prev;
                prev = curr;
            }
            col--;

            if (tmpRow < row)
            {
                for (int i = col - 1; i >= tmpCol; i--)
                {
                    //std::cout << a[row - 1][i] << " ";
                    curr = a[row-1][i];
                    a[row-1][i] = prev;
                    prev = curr;
                }
                row--;
            }
            if (tmpCol < col)
            {
                for (int i = row - 1; i >= tmpRow; i--)
                {
                    //std::cout << a[i][tmpCol] << " ";
                    curr = a[i][tmpCol];
                    a[i][tmpCol] = prev;
                    prev = curr;
                }
                tmpCol++;
            }
        }

        for (int i = 0; i < x; i++)
        {
            for (int j = 0; j < y; j++)
            {
                std::cout<<a[i][j]<<" ";
            }
            
        }
        
        std::cout << std::endl;
    }
}