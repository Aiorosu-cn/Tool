long double probability(unsigned numbers ,unsigned picks)
{
	long double result = 1.0;
	long double n;
	unsigned p;

	for ( n = numbers, p = picks ; p>0 ; n-- , p--)
		result = result * n / p;
	return result;
}
//这中间值交替算法可以防止中间结果超出最大浮点数
