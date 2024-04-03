1.  Khai báo nào sau đây là hợp lệ:
	i.	double a[];
	ii.	double[] a;
	iii.	double a{5};
	iv.	double a[5];

Đáp án: iv



2.	Khai báo nào sau đây là hợp lệ
	i.	int a[3] = { 1, 5, 8, 4};
	ii.	int a[5] = { 1, 5, 8, 4};
	iii.	int[] a =  { 1, 5, 8, 4};
	iv.	int a[] =  { 1, 5, 8, 4};

Đáp án: ii



3.	Khai báo nào sau đây là khai báo một mảng 2 chiều
	i.	array a[20][20];
	ii.	int a[20][20];
	iii.	int a[20, 20];
	iv.	char a[20];

Đáp án: ii



4.	Mảng foo có 100 phần tử, câu lệnh nào sau đây dung truy cập phần tử thứ 7:
	i.	foo[6];
	ii.	foo[7];
	iii.	foo(7);
	iv.	foo{6};

Đáp án: i



5.	Câu lệnh nào sau đây trả về địa chỉ của phần tử đầu tiên trong mảng foo
	i.	foo[0];
	ii.	&foo[1];
	iii.	&foo;
	iv.	foo;

Đáp án: iv



6.	Hai chỉ số [5] & [4] trong int a[5]; & a[4]++; diễn tả:
	i.	Cả hai chỉ số diễn tả độ dài của mảng a
	ii.	Cả hai chỉ số diễn tả chỉ số phẩm tử của mang a
	iii.	[5] diễn tả độ dài của mảng a & [4] diễn tả chỉ số phần tử của mảng a
	iv.	[5] diễn tả chỉ số phần tử của mảng a & [4] diễn tả độ dài của mảng a

Đáp án: iii



7.	Mảng được truyền như một đối số cho hàm được hiểu như thế nào
	i.	Mảng được truyền
	ii.	Giá trị của phần tử đầu tiên của mảng được truyền
	iii.	Địa chỉ của phần tử đầu tiên của mảng được truyền
	iv.	Số phần tử của mảng được truyền.

Đáp án: iii



8.	Những phát biểu nào xong đây là chính xác
	i.	Độ dài của mảng phải xác định ngay khi khai báo
	ii.	Không thể thay đổi độ dài của mảng bằng cách khai báo lại mạng
	iii.	Khi truyền mảng cho hàm, độ dài của mảng cũng cần được truyền theo
	iv.	Tất cả các phát biểu trên

Đáp án: i, ii



9.	Có lỗi nào xảy ra với đoạn chương trình sau
	int sampleArray[10];
	for (int index = 1; index <= 10; index++)
		sampleArray[index] = 3*index;
	i.	Lỗi khi dịch: chưa khởi tạo mảng
	ii.	Lỗi khi dịch: truy cập phần tử vượt khoảng cho phép
	iii.	Lỗi khi chạy: truy cập phần tử vượt khoảng cho phép
	iv.	Không có lỗi nào trong khi dịch và chạy

Đáp án: iii



10.	Những khai báo nào xong đây là chính xác
	i.	void clearBoard(char aChar[][]);
	ii.	void clearBoard(char[][] aChar);
	iii.	void clearBoard(char[][10] aChar);
	iv.	void clearBoard(charaChar[][10]);

Đáp án: iii



11.	Cho hàm tripler và 2 khai báo như sau, lệnh gọi hàm nào không đúng
	void tripler(int& n){ n = 3*n; }
	int a[3] = {4, 5, 6}, number = 2;
	i.	triple(a[2]);
	ii.	triple(a[number]);
	iii.	triple(a);
	iv.	triple(number);

Đáp án: iii



12.	Đoạn mã sau in ra như thế nào:
	double a[3] = {1.1, 2.2, 3.3};
	cout <<a[0]<<" "<<a[1]<<" "<<a[2]<< endl; a[1] = a[2];
	cout <<a[0]<<" "<<a[1]<<" "<<a[2]<< endl;
	i.	1.12.23.3
		1.12.23.3
	ii.	1.1 2.2 3.3
		1.1 2.2 3.3
	iii.	1.1 2.2 3.3
		2.2 2.2 3.3
	iv.	1.1 2.2 3.3
		1.1 3.3 3.3

Đáp án: iv



13.	Đoạn mã sau in ra như thế nào:
	int a[3] = {5, 10, 15};
	for (int i = 2; i >= 0; i--)
		cout << a[i] << “ “;
	i.	5 10 15
	ii.	15 10
	iii.	15 10 5
	iv.	2 1 0

Đáp án: iii



14.	Sau khi chạy đoạn mã sau giá trị của phần tử thứ 2 trong mảng là gì:
	int a[5];
	for (int i = 0; i <5; i++)
	{
	   a[i] = i + 2;
	   if (i >= 2) a[i-1] = a[i] + 3;
	}
	i.	2
	ii.	3
	iii.	7
	iv.	8

Đáp án: iii



15.	Mảng a có 100 phần tử, lệnh nào có thể dùng để in giá trị a[0],  a[2], a[4],…
	i.	for (i=0; i<100; i=i+2) cout << a[i] << endl;
	ii.	for (i=0; i<50; i++) cout << a[i*2] << endl;
	iii.	for (i=0; i<50; i++) cout << a[i]*2 << endl;
	iv.	tất cả các đoạn lệnh trên

Đáp án: i



16.	Đếm số lần xuất hiện các ký tự ASCII (256 ký tự), khai báo nào là hợp lý
	i.	int freq[char];
	ii.	char freq[256];
	iii.	int freq[256];
	iv.	char freq[int];

Đáp án: iii




17.	Cho đoạn chương trình sau, khai báo hàm nào là hợp lý nhất:
	char a[200];
	char b[200];
	copy(a, b, 200); // sao toàn bộ nội dung mảng b sang mảng a
	i.	copy(char a1[], char a2[], int size);
	ii.	copy(const char a1[], char a2[], int size);
	iii.	copy(const char a1[], const char a2[], int size);
	iv.	copy(char a1[], const char a2[], int size);

Đáp án: iii



18.	Cho khai báo hàm như sau, phát biểu nào không chính xác:
	void SapXep(int a[], int N);
	i.	Độ dài của mảng truyền vào là N
	ii.	Mảng truyền vào có N phần tử
	iii.	Phải truyền vào độ dài của mảng trong ngoặc vuông [] cùng tên mảng
	iv.	Mảng được truyền vào theo kiểu truyền giá trị

Đáp án: iii



19.	Khai báo hàm cho việc đổi chỗ 2 phần tử của mảng trong quá trình sắp xếp, khai báo nào sau đây là đúng:
	i.	int swap(int a, int b);
	ii.	void swap(int a, int b);
	iii.	int swap(int &a, int &b);
	iv.	void swap(int &a, int &b);

Đáp án: iv



20.	Truyền mảng 2 chiều cho hàm, khai báo nào sau là đúng:
	i.	void timkiem(int a[][]);
	ii.	void timkiem(int a[10][]);
	iii.	void timkiem(int a[][10]);
	iv.	void timkiem(int[10][10] a);

Đáp án: iii
