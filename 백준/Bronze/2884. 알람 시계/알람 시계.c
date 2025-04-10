#include <stdio.h>

int main() {
	int h, m;
	scanf("%d %d", &h, &m);

	if (h < 1 && m < 45)
	{
		h = 23;
		m += 15;
	}
	else
	{
		if (m >= 45)
		{
			m -= 45;
		}
		else
		{
			h -= 1;
			m += 15;
		}
	}
	printf("%d %d", h, m);
	return 0;
}