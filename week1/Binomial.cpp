// Bài nay chủ yếu luyện tạp về truy hồi
#include <iostream>

// Tổ hợp C(n,k) = C(n-1,k) +C(n-1,k-1)
int n, k;
int C(int n, int k)
{
    if (k == 0 || k == n)
        return 1;
    else
        return C(n - 1, k) + C(n - 1, k - 1);
}
int main()
{
    std::cout << "nhap n, k \n";

    std ::cin >> n >> k;
    std ::cout << C(n, k);
}
