#include <stdio.h>

char maze[100][101];
int visited[100][100];

int q[20000];
int front;
int rear;

int rsize;
int csize;

int bfs(int rs, int cs);

int main(void)
{
	int i, j;
	int ch;
	int startr, startc;
	scanf("%d %d", &rsize, &csize);
	for(i = 0; i < rsize; i++)
	{
		scanf("%s", maze[i]);
	}
	for(i = 0; i< rsize; i++)
	{
		for (j = 0; j < csize; j++)
		{
			if(maze[i][j] == 'S')
			{
				startr = i;
				startc = j;
			}
		}
	}
//	for(i = 0; i < rsize; i++)
//	{
//		for(j = 0; j < csize; j++)
//		{
//			scanf(" %c", &ch);
//			if(ch == '#') // 벽
//			{
//				maze[i][j] = 1;
//			}
//			else if(ch == '.')
//			{
//				maze[i][j] = 0;
//			}
//			else if(ch == 'S')
//			{
//				maze[i][j] = 3;
//				startr = i;
//				startc = j;
//			}
//			else if(ch == 'G')
//			{
//				maze[i][j] = 4;
//			}
//		}
//	}

	bfs(startr, startc);

	for(i = 0; i < rsize; i++)
	{
		for( j = 0; j < csize; j++)
		{
			if(maze[i][j] == '.' || maze[i][j] == 'G')
				printf("%d", visited[i][j] - 1);
			else
				printf("%c", maze[i][j]);
		}
		printf("\n");
	}
	return 0;
}

int bfs(int rs, int cs)
{
	int dr[] = { 0, 1, 0, -1};
	int dc[] = { 1, 0, -1, 0};
	int r, c;
	int nr, nc;
	int i;
	// 시작점 인큐
	q[rear++] = rs;
	q[rear++] = cs;
	visited[rs][cs] = 1;

	while( front != rear )
	{
		r = q[front++];
		c = q[front++];
		if(maze[r][c] == 'G') // 현재 노드에서 할 일. goal 확인
		{
			return visited[r][c] - 1;
		}
		for(i = 0; i < 4; i++)
		{
			nr = r + dr[i];
			nc = c + dc[i];
			if( 0 <= nr && nr < rsize && 0 <= nc && nc < csize)
			{
				if((maze[nr][nc] != '#') && (visited[nr][nc] == 0))
				{
					visited[nr][nc] = visited[r][c] + 1;
					q[rear++] = nr;
					q[rear++] = nc;
				}
			}
		}
	}
	return 0;
}
