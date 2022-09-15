bool Binary_Search (ll x)
{
	L = 0, R = N - 1;
	while (L <= R)
	{
		MID = (L + R) / 2;
		if (A[MID] == x) return true;
		else if (A[MID] < x) L = MID + 1;
		else if (A[MID] > x) R = MID - 1;
	}
	return false;
}