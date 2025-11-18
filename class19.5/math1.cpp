// 这个文件名如果叫math.cpp时，会出现链接错误。
// 因为编译之后只会有一个math.obj ==>(math.c --> math.obj math.cpp --> math.obj)
int ave(int a, int b) {
	return (a + b) / 2;
}