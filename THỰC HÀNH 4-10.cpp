//Viết chương trình nhập 3 cạnh của 1 tam giác, cho biết đó là tam giác gì(vuông / cân / vuông cân / đều / thường).Các tính chất của tam giác được định nghĩa như sau :
//Điều kiện là tam giác : Tổng 2 cạnh bất kỳ luôn lớn hơn 2 cạnh còn lại
//Cân : Khi có 2 cạnh bằng nhau
//Đều : Khi có 3 cạnh bằng nhau
//Vuông : khi bình phương 1 cạnh bằng xấp xỉ tổng của bình phương 2 cạnh còn lại.Độ lệch xấp xỉ cho phép < 1. Ví dụ : 71.1 và 72 là xấp xỉ nhau vì chúng lệch nhau 0.9 (nhỏ hơn 1)
//	Vuông cân : Khi vừa thỏa mãn điều kiện vuông và điều kiện cân(Bài khó) .
//	Thường : Các trường hợp còn lại

#include <iostream>
using namespace std;

int main()
{
	float a, b, c;
	cout << "Nhap canh a: "; cin >> a;
	cout << "Nhap canh b: "; cin >> b;
	cout << "Nhap canh c: "; cin >> c;

	if (a + b < c || b + c < a || a + c < b)
		cout << "Khong ton tai tam giac";
	else if (a == b && b == c)
		cout << "Tam giac deu";
	else
	{
		bool kiemtracan = (a == b || b == c || a == c);
		bool kiemtravuong = (int(a * a - b * b - c * c) == 0 
			|| int(b * b - a * a - c * c) == 0 || int(c * c - a * a - b * b) == 0);

		if (kiemtracan && kiemtravuong)
			cout << "Tam giac vuong can";
		else if (kiemtracan)
			cout << "Tam giac can";
		else if (kiemtravuong)
			cout << "Tam giac vuong";
		else
			cout << "Tam giac thuong";
	}
}
	



