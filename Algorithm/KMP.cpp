int A[LIM], B[2 * LIM], LPS[LIM];
int n, k, tmp;

void computeLPS() {
	int len = 0;
	LPS[0] = 0;
	int i = 1;
	while (i < n)
	{
		if (A[i] == A[len]) {
			len++;
			LPS[i] = len;
			i++;
		}
		else if (len == 0) {
			LPS[i] = 0;
			i++;
		}
		else if (len != 0) {
			len = LPS[len - 1];
		}
	}
}
bool KMP() {
	computeLPS();
	int i = 0, j = 0;
	while ((2 * n - i) >= (n - j))
	{
		if (A[j] == B[i]) {
			i++;
			j++;
		}
		if (j == n) return true;
		else if (i < 2 * n && A[j] != B[i]) {
			if (j != 0)
				j = LPS[j - 1];
			else
				i++;
		}
	}
	return false;
}