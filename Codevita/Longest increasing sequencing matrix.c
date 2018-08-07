Given a N X N matrix where all numbers are distinct, find the maximum length path and starting from any cell.We can move in 4 directions from a given cell with the condition that the adjacent cells have a difference of 1.
E.g: Input: Matrix order: 3 3 Matrix = {1 2 9 5 3 8 4 6 7} Output: 4 (6 7 8 9 = 4)


//PROGRAM
#include <stdio.h>

#define MAX_ROW 10
#define MAX_COL 10

int max(int a, int b, int c, int d);

int get_max_cont_inc_seq_len(int matrix[][MAX_COL], 
							 int curr_row, int curr_col, 
							 int m, int n);

int get_max_cont_inc_seq_len_wrap(int matrix[][MAX_COL], int m, int n);


 
int main()
{
	int matrix[MAX_ROW][MAX_COL], m, n, i, j;
	
	scanf("%d %d", &m, &n);
	for(i = 0; i < m; i++)
	{
		for(j = 0; j < n; j++)
		{
			scanf("%d", &matrix[i][j]);
		}
	}
	
	// Maximum Contiguous Increasing Sequence Length
	int max_cont_inc_seq_len = get_max_cont_inc_seq_len_wrap(matrix, m, n);
	printf("%d", max_cont_inc_seq_len);
	
	return 0;
}

int max(int a, int b, int c, int d)
{
	if(a>b && a>c && a>d)
	{
		return a;
	}
	
	if(b>c && b>d)
	{
		return b;
	}
	
	if(c>d)
	{
		return c;
	}
	
	return d;
}

int get_max_cont_inc_seq_len(int matrix[][MAX_COL], 
							 int curr_row, int curr_col, 
							 int m, int n)
{
	if((curr_row >= m) || (curr_col >= n) )
	{
		return 0;
	}
	
	int curr_elem = matrix[curr_row][curr_col];
	
	int isRightAvl = (curr_col + 1) < n;
	int isLeftAvl = (curr_col - 1) >= 0;
	int isTopAvl = (curr_row - 1) >= 0;
	int isBottomAvl = (curr_row + 1) < m;
	
	int seq_len_right = 0, seq_len_left = 0;
	int seq_len_top = 0,   seq_len_bottom = 0;
	
	if(isRightAvl && (matrix[curr_row][curr_col+1] == (curr_elem + 1)))
	{
		seq_len_right = 1 + get_max_cont_inc_seq_len(matrix, 
											   curr_row, curr_col + 1, 
											   m, n);
	}
	
	if(isLeftAvl && (matrix[curr_row][curr_col-1] == (curr_elem + 1)))
	{
		seq_len_left = 1 + get_max_cont_inc_seq_len(matrix, 
											   curr_row, curr_col - 1, 
											   m, n);
	}
	
	if(isTopAvl && (matrix[curr_row - 1][curr_col] == (curr_elem + 1)))
	{
		seq_len_top = 1 + get_max_cont_inc_seq_len(matrix, 
											   curr_row - 1, curr_col, 
											   m, n);
	}
	
	if(isBottomAvl && (matrix[curr_row + 1][curr_col] == (curr_elem + 1)))
	{
		seq_len_bottom = 1 + get_max_cont_inc_seq_len(matrix, 
											   curr_row + 1, curr_col, 
											   m, n);
	}
	
	return max(seq_len_bottom, seq_len_left, seq_len_right, seq_len_top);
}

int get_max_cont_inc_seq_len_wrap(int matrix[][MAX_COL], int m, int n)
{
	int visited[MAX_ROW][MAX_COL], i, j, x, y;
	
	
	int max = 0;
	for(i = 0; i < m; i++)
	{
		for(j = 0; j < n; j++)
		{
			for(x = 0; x < m; x++)
			{
				for(y = 0; y < n; y++)
				{
					visited[x][y] = 0;
				}
			}
			
			int temp = 1 + get_max_cont_inc_seq_len(matrix, i, j, m, n);
			if(max < temp)
			{
				max = temp;
			}
		}
	}
	
	return max;
}
