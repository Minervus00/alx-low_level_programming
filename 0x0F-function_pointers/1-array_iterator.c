/**
 * array_iterator - ojjjxx
 * @array: kk
 * @size: ccc
 * @action: jjhh
 *
 * Return: ggg
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	for (i = 0; i < n; i++)
		action(array[i]);
}
