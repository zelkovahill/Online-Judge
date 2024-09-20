#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// sizes[i][0] : 가로 길이
// sizes[i][1] : 세로 길이

// sizes_rows는 2차원 배열 sizes의 행 길이, sizes_cols는 2차원 배열 sizes의 열 길이입니다.
int solution(int **sizes, size_t sizes_rows, size_t sizes_cols)
{

    int longWidth = 0;
    int longheight = 0;

    for (int i = 0; i < sizes_rows; i++)
    {
        int width = sizes[i][0];
        int height = sizes[i][1];

        if (height > width)
        {
            height = width ^ height;
            width = width ^ height;
            height = width ^ height;
        }

        if (width > longWidth)
        {
            longWidth = width;
        }

        if (height > longheight)
        {
            longheight = height;
        }
    }

    int result = longWidth * longheight;

    return result;
}