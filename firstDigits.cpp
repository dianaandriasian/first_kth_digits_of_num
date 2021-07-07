//////////////////////////////////////
/// 10. First kth digits of number ///
//////////////////////////////////////

#include <iostream>

int lengthOf(long long);
long long kthDigits(long long, int);

int main()
{
	std::cout << "Enter the num : ";
	long long num;
	std::cin >> num;
	std::cout << "How many digits do you want to out? : ";
	int k ;
	std::cin >> k;
	std::cout << "The length of number : " << lengthOf(num) << std::endl;
	std::cout << "The first kth digits of number : " << kthDigits(num, k) <<std::endl;
	return 0;
}

int lengthOf(long long n)
{
	int length = 0;

	while (n) {
		++length;
		n /= 10;
	}
	return length;
}
long long kthDigits(long long n, int k)
{
	if (lengthOf(n) > k) {
		k = lengthOf(n) - k;
		while (k) {
			n /= 10;
			--k;
		}
	 }
	return n;
}