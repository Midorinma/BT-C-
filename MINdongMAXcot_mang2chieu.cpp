#include<stdio.h>
using namespace std;
bool MINMAX(int mat[100][100], int n, int &result){
	for(int i=0; i<n; i++){
		//Tim o co gia tri nho nhat theo dong thu i
		//dong thoi luu lai vi tri cot j cua o do
		int min_row = mat[i][0], col_j = 0;
		for(int j=1; j<n; j++){
			if(min_row > mat[i][j]){
				min_row = mat[i][j];
				col_j = j;
			}
		}
		//xem xem o vua tim duoc co max theo cot j khong?
		//Neu khong thi break luon de tiep tuc xet dong tiep theo
		int k;
		for(k=0; k<n; k++)
			if(min_row < mat[k][col_j])
				break;
		//Neu co thi tra lai ket qua
		if( k == n ){
			result = min_row;
			return true;
		}
	}
	return false;
}
int main(){
	int mat[100][100]= {{1,2,3},
						{10,9,12,},
						{9,8,10}};
	int n=3, result=0;
	if(MINMAX(mat,n,result))
		printf("Diem yen ngua co gia tri = %d",result);
	else
		printf("Khong co diem yen ngua");
return 0;
}
