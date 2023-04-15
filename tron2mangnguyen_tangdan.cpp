 #include<stdio.h>
#include<conio.h>
#include<math.h>
#define MAX 100

void nhap (int a[], int &n)
{
	do
	{
		printf("\nNhap so phan tu: ");
		scanf("%d", &n);
		if(n <= 0 || n > MAX)
		{
			printf("\nSo phan tu khong hop le. Xin kiem tra lai !");
		}
	}while(n <= 0 || n > MAX);
	for(int i = 0; i < n; i++)
	{
		printf("\nNhap a[%d]: ", i);
		scanf("%d", &a[i]);
	}
}

void xuat(int a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		printf("%4d", a[i]);
	}
}

void HoanVi(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}
void SapXep(int a[], int n)
{
	for(int i = 0; i < n - 1; i++)
	{
		for(int j = i + 1; j < n; j++)
		{
			if(a[i] > a[j])
			{
				HoanVi(a[i], a[j]);
			}
		}
	}
}

void Tron2MangThanh1Mang(int a[], int b[], int c[], int na, int nb, int &nc)
{
	nc = na + nb;         // S? ph?n t? m?ng c?n g?p
	SapXep(a, na);       // S?p x?p m?ng a
	SapXep(b, nb);       // S?p x?p m?ng b
	int vitriA = 0, vitriB = 0; 
	for(int i = 0; i < nc; i++)       // Duy?t m?ng c?n g?p
	{
		if(vitriA < na && vitriB < nb)   // Ki?m tra t?ng v? trí trong m?ng A và m?ng B xem có l?n hon s? ph?n t? c?a t?ng m?ng        
		{
			if(a[vitriA] < b[vitriB])     // So sánh xem ph?n t? c?a m?ng nào nh? hon (? d?y là m?ng a)
			{
				c[i] = a[vitriA];          // Ð? m?ng a vào m?ng c?n g?p
				vitriA++;
			}
			else
			{
				c[i] = b[vitriB];             // Ngu?c l?i thì d? m?ng b vào m?ng c?n g?p
				vitriB++;
			}
		}
		// Xét thêm
		else if(vitriB == nb)           // N?u mà v? trí b tang b?ng s? ph?n t? m?ng b
		{
			c[i] = a[vitriA];            // Ch? còn m?ng a d? d? vào m?ng c?n g?p
			vitriA++;
		}
		else
		{
			c[i] = b[vitriB];
			vitriB++;
		}
	}
}
int main()
{
	int na, nb, nc;
	int a[MAX], b[MAX], c[MAX];

	nhap(a, na);
	xuat(a, na);

	nhap(b, nb);
	xuat(b, nb);

	Tron2MangThanh1Mang(a, b, c, na, nb, nc);
	printf("\nMang sau khi tron 2 mang : ");
	xuat(c, nc);

	getch();
	return 0;
}
