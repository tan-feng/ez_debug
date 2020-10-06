  #include "ez_debug.h"

int func(int x)
{
	ez_trace();
	x++;
	ez_debug("x=%d", x);
	return x++;
}

int main()
{
	int y = func(1);
	ez_debug("y=%d", y);

}
