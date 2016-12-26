int Task8(int i, int k)
{
	if (!(i%k))
		return i - k;
	else if (!(k%i))
		return k - i;
	else
		return k + i;

}


int main()
{
	int i, k;
	cout << "Please input i and k:" << endl;
	cin >> i >> k;

	cout << Task8(i, k) << endl;
	return 0;

}