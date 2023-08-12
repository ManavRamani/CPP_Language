/*
	day 3 : Ex : Get 10 Value form User and find Small Value using Nestted else_if :
*/

#include <iostream>

using namespace std;

class small_1
{
	private:
		int a, b, c, d, e, f, g, h, i, j;

	public:
		void get_10()
		{
			cout << "Enter value of a : ";
			cin >> a;
			cout << "Enter value of b : ";
			cin >> b;
			cout << "Enter value of c : ";
			cin >> c;
			cout << "Enter value of d : ";
			cin >> d;
			cout << "Enter value of e : ";
			cin >> e;
			cout << "Enter value of f : ";
			cin >> f;
			cout << "Enter value of g : ";
			cin >> g;
			cout << "Enter value of h : ";
			cin >> h;
			cout << "Enter value of i : ";
			cin >> i;
			cout << "Enter value of j : ";
			cin >> j;
		}

		void small()
		{
			get_10();

			if (a < b)
			{
				if (a < c)
				{
					if (a < d)
					{
						if (a < e)
						{
							if (a < f)
							{
								if (a < g)
								{
									if (a < h)
									{
										if (a < i)
										{
											if (a < j)
											{
												cout << "a is Small : " << a << endl;
											}
											else
											{
												cout << "j is Small : " << j << endl;
											}
										}
										else if (i < j)
										{
											cout << "i is Small : " << i << endl;
										}
										else
										{
											cout << "j is Small : " << j << endl;
										}
									}
									else if (h < i)
									{
										if (h < j)
										{
											cout << "h is Small : " << h << endl;
										}
										else
										{
											cout << "j is Small : " << j << endl;
										}
									}
									else if (i < j)
									{
										cout << "i is Small : " << i << endl;
									}
									else
									{
										cout << "j is Small : " << j << endl;
									}
								}
								else if (g < h)
								{
									if (g < i)
									{
										if (i < j)
										{
											cout << "i is Small : " << i << endl;
										}
										else
										{
											cout << "j is Small : " << j << endl;
										}
									}
									else if (i < j)
									{
										cout << "i is Small : " << i << endl;
									}
									else
									{
										cout << "j is Small : " << j << endl;
									}
								}
								else if (h < i)
								{
									if (h < j)
									{
										cout << "h is Small : " << h << endl;
									}
									else
									{
										cout << "j is Small : " << j << endl;
									}
								}
								else if (i < j)
								{
									cout << "i is Small : " << i << endl;
								}
								else
								{
									cout << "j is Small : " << j << endl;
								}
							}

							else if (f < g)
							{
								if (f < h)
								{
									if (f < i)
									{
										if (f < j)
										{
											cout << "f is Small : " << f << endl;
										}
										else
										{
											cout << "j is Small : " << j << endl;
										}
									}
									else if (i < j)
									{
										cout << "i is Small : " << i << endl;
									}
									else
									{
										cout << "j is Small : " << j << endl;
									}
								}
								else if (h < i)
								{
									if (h < j)
									{
										cout << "h is Small : " << h << endl;
									}
									else
									{
										cout << "j is Small : " << j << endl;
									}
								}
								else if (i < j)
								{
									cout << "i is Small : " << i << endl;
								}
								else
								{
									cout << "j is Small : " << j << endl;
								}
							}
							else if (g < h)
							{
								if (g < i)
								{
									if (g < j)
									{
										cout << "g is Small : " << g << endl;
									}
									else
									{
										cout << "j is Small : " << j << endl;
									}
								}
								else if (i < j)
								{
									cout << "i is Small : " << i << endl;
								}
								else
								{
									cout << "j is Small : " << j << endl;
								}
							}
							else if (h < i)
							{
								if (h < j)
								{
									cout << "h is Small : " << h << endl;
								}
								else
								{
									cout << "j is Small : " << j << endl;
								}
							}
							else if (i < j)
							{
								cout << "i is Small : " << i << endl;
							}
							else
							{
								cout << "j is Small : " << j << endl;
							}
						}
						else if (e < f)
						{
							if (e < g)
							{
								if (e < h)
								{
									if (e < i)
									{
										if (e < j)
										{
											cout << "e is Small : " << e << endl;
										}
										else
										{
											cout << "j is Small : " << j << endl;
										}
									}
									else if (i < j)
									{
										cout << "i is Small : " << i << endl;
									}
									else
									{
										cout << "j is Small : " << j << endl;
									}
								}
								else if (h < i)
								{
									if (h < j)
									{
										cout << "h is Small : " << h << endl;
									}
									else
									{
										cout << "j is Small : " << j << endl;
									}
								}
								else if (i < j)
								{
									cout << "i is Small : " << i << endl;
								}
								else
								{
									cout << "j is Small : " << j << endl;
								}
							}
							else if (g < h)
							{
								if (g < i)
								{
									if (g < j)
									{
										cout << "g is Small : " << g << endl;
									}
									else
									{
										cout << "j is Small : " << j << endl;
									}
								}
								else if (i < j)
								{
									cout << "i is Small : " << i << endl;
								}
								else
								{
									cout << "j is Small : " << j << endl;
								}
							}
							else if (h < i)
							{
								if (h < j)
								{
									cout << "h is Small : " << h << endl;
								}
								else
								{
									cout << "j is Small : " << j << endl;
								}
							}
							else if (i < j)
							{
								cout << "i is Small : " << i << endl;
							}
							else
							{
								cout << "j is Small : " << j << endl;
							}
						}
						else if (f < g)
						{
							if (f < h)
							{
								if (f < i)
								{
									if (f < j)
									{
										cout << "f is Small : " << f << endl;
									}
									else
									{
										cout << "j is Small : " << j << endl;
									}
								}
								else if (i < j)
								{
									cout << "i is Small : " << i << endl;
								}
								else
								{
									cout << "j is Small : " << j << endl;
								}
							}
							else if (h < i)
							{
								if (h < j)
								{
									cout << "h is Small : " << h << endl;
								}
								else
								{
									cout << "j is Small : " << j << endl;
								}
							}
							else if (i < j)
							{
								cout << "i is Small : " << i << endl;
							}
							else
							{
								cout << "j is Small : " << j << endl;
							}
						}
						else if (g < h)
						{
							if (g < i)
							{
								if (g < j)
								{
									cout << "g is Small : " << g << endl;
								}
								else
								{
									cout << "j is Small : " << j << endl;
								}
							}
							else if (i < j)
							{
								cout << "i is Small : " << i << endl;
							}
							else
							{
								cout << "j is Small : " << j << endl;
							}
						}
						else if (h < i)
						{
							if (h < j)
							{
								cout << "h is Small : " << h << endl;
							}
							else
							{
								cout << "j is Small : " << j << endl;
							}
						}
						else if (i < j)
						{
							cout << "i is Small : " << i << endl;
						}
						else
						{
							cout << "j is Small : " << j << endl;
						}
					}
					else if (d < e)
					{
						if (d < f)
						{
							if (d < g)
							{
								if (d < h)
								{
									if (d < i)
									{
										if (d < j)
										{
											cout << "d is Small : " << d << endl;
										}
										else
										{
											cout << "j is Small : " << j << endl;
										}
									}
									else if (i < j)
									{
										cout << "i is Small : " << i << endl;
									}
									else
									{
										cout << "j is Small : " << j << endl;
									}
								}
								else if (h < i)
								{
									if (h < j)
									{
										cout << "h is Small : " << h << endl;
									}
									else
									{
										cout << "j is Small : " << j << endl;
									}
								}
								else if (i < j)
								{
									cout << "i is Small : " << i << endl;
								}
								else
								{
									cout << "j is Small : " << j << endl;
								}
							}
							else if (g < h)
							{
								if (g < i)
								{
									if (g < j)
									{
										cout << "g is Small : " << g << endl;
									}
									else
									{
										cout << "j is Small : " << j << endl;
									}
								}
								else if (i < j)
								{
									cout << "i is Small : " << i << endl;
								}
								else
								{
									cout << "j is Small : " << j << endl;
								}
							}
							else if (h < i)
							{
								if (h < j)
								{
									cout << "h is Small : " << h << endl;
								}
								else
								{
									cout << "j is Small : " << j << endl;
								}
							}
							else if (i < j)
							{
								cout << "i is Small : " << i << endl;
							}
							else
							{
								cout << "j is Small : " << j << endl;
							}
						}
						else if (f < g)
						{
							if (f < h)
							{
								if (f < i)
								{
									if (f < j)
									{
										cout << "f is Small : " << f << endl;
									}
									else
									{
										cout << "j is Small : " << j << endl;
									}
								}
								else if (i < j)
								{
									cout << "i is Small : " << i << endl;
								}
								else
								{
									cout << "j is Small : " << j << endl;
								}
							}
							else if (h < i)
							{
								if (h < j)
								{
									cout << "h is Small : " << h << endl;
								}
								else
								{
									cout << "j is Small : " << j << endl;
								}
							}
							else if (i < j)
							{
								cout << "i is Small : " << i << endl;
							}
							else
							{
								cout << "j is Small : " << j << endl;
							}
						}
						else if (g < h)
						{
							if (g < i)
							{
								if (g < j)
								{
									cout << "g is Small : " << g << endl;
								}
								else
								{
									cout << "j is Small : " << j << endl;
								}
							}
							else if (i < j)
							{
								cout << "i is Small : " << i << endl;
							}
							else
							{
								cout << "j is Small : " << j << endl;
							}
						}
						else if (h < i)
						{
							if (h < j)
							{
								cout << "h is Small : " << h << endl;
							}
							else
							{
								cout << "j is Small : " << j << endl;
							}
						}
						else if (i < j)
						{
							cout << "i is Small : " << i << endl;
						}
						else
						{
							cout << "j is Small : " << j << endl;
						}
					}
					else if (e < f)
					{
						if (e < g)
						{
							if (e < h)
							{
								if (e < i)
								{
									if (e < j)
									{
										cout << "e is Small : " << e << endl;
									}
									else
									{
										cout << "j is Small : " << j << endl;
									}
								}
								else if (i < j)
								{
									cout << "i is Small : " << i << endl;
								}
								else
								{
									cout << "j is Small : " << j << endl;
								}
							}
							else if (h < i)
							{
								if (h < j)
								{
									cout << "h is Small : " << h << endl;
								}
								else
								{
									cout << "j is Small : " << j << endl;
								}
							}
							else if (i < j)
							{
								cout << "i is Small : " << i << endl;
							}
							else
							{
								cout << "j is Small : " << j << endl;
							}
						}
						else if (g < h)
						{
							if (g < i)
							{
								if (g < j)
								{
									cout << "g is Small : " << g << endl;
								}
								else
								{
									cout << "j is Small : " << j << endl;
								}
							}
							else if (i < j)
							{
								cout << "i is Small : " << i << endl;
							}
							else
							{
								cout << "j is Small : " << j << endl;
							}
						}
						else if (h < i)
						{
							if (h < j)
							{
								cout << "h is Small : " << h << endl;
							}
							else
							{
								cout << "j is Small : " << j << endl;
							}
						}
						else if (i < j)
						{
							cout << "i is Small : " << i << endl;
						}
						else
						{
							cout << "j is Small : " << j << endl;
						}
					}
					else if (f < g)
					{
						if (f < h)
						{
							if (f < i)
							{
								if (f < j)
								{
									cout << "f is Small : " << f << endl;
								}
								else
								{
									cout << "j is Small : " << j << endl;
								}
							}
							else if (i < j)
							{
								cout << "i is Small : " << i << endl;
							}
							else
							{
								cout << "j is Small : " << j << endl;
							}
						}
						else if (h < i)
						{
							if (h < j)
							{
								cout << "h is Small : " << h << endl;
							}
							else
							{
								cout << "j is Small : " << j << endl;
							}
						}
						else if (i < j)
						{
							cout << "i is Small : " << i << endl;
						}
						else
						{
							cout << "j is Small : " << j << endl;
						}
					}
					else if (g < h)
					{
						if (g < i)
						{
							if (g < j)
							{
								cout << "g is Small : " << g << endl;
							}
							else
							{
								cout << "j is Small : " << j << endl;
							}
						}
						else if (i < j)
						{
							cout << "i is Small : " << i << endl;
						}
						else
						{
							cout << "j is Small : " << j << endl;
						}
					}
					else if (h < i)
					{
						if (h < j)
						{
							cout << "h is Small : " << h << endl;
						}
						else
						{
							cout << "j is Small : " << j << endl;
						}
					}
					else if (i < j)
					{
						cout << "i is Small : " << i << endl;
					}
					else
					{
						cout << "j is Small : " << j << endl;
					}
				}
				else if (c < d)
				{
					if (c < e)
					{
						if (c < f)
						{
							if (c < g)
							{
								if (c < h)
								{
									if (c < i)
									{
										if (c < j)
										{
											cout << "c is Small : " << c << endl;
										}
										else
										{
											cout << "j is Small : " << j << endl;
										}
									}
									else if (i < j)
									{
										cout << "i is Small : " << i << endl;
									}
									else
									{
										cout << "j is Small : " << j << endl;
									}
								}
								else if (h < i)
								{
									if (h < j)
									{
										cout << "h is Small : " << h << endl;
									}
									else
									{
										cout << "j is Small : " << j << endl;
									}
								}
								else if (i < j)
								{
									cout << "i is Small : " << i << endl;
								}
								else
								{
									cout << "j is Small : " << j << endl;
								}
							}
							else if (g < h)
							{
								if (g < i)
								{
									if (g < j)
									{
										cout << "g is Small : " << g << endl;
									}
									else
									{
										cout << "j is Small : " << j << endl;
									}
								}
								else if (i < j)
								{
									cout << "i is Small : " << i << endl;
								}
								else
								{
									cout << "j is Small : " << j << endl;
								}
							}
							else if (h < i)
							{
								if (h < j)
								{
									cout << "h is Small : " << h << endl;
								}
								else
								{
									cout << "j is Small : " << j << endl;
								}
							}
							else if (i < j)
							{
								cout << "i is Small : " << i << endl;
							}
							else
							{
								cout << "j is Small : " << j << endl;
							}
						}
						else if (f < g)
						{
							if (f < h)
							{
								if (f < i)
								{
									if (f < j)
									{
										cout << "f is Small : " << f << endl;
									}
									else
									{
										cout << "j is Small : " << j << endl;
									}
								}
								else if (i < j)
								{
									cout << "i is Small : " << i << endl;
								}
								else
								{
									cout << "j is Small : " << j << endl;
								}
							}
							else if (h < i)
							{
								if (h < j)
								{
									cout << "h is Small : " << h << endl;
								}
								else
								{
									cout << "j is Small : " << j << endl;
								}
							}
							else if (i < j)
							{
								cout << "i is Small : " << i << endl;
							}
							else
							{
								cout << "j is Small : " << j << endl;
							}
						}
						else if (g < h)
						{
							if (g < i)
							{
								if (g < j)
								{
									cout << "g is Small : " << g << endl;
								}
								else
								{
									cout << "j is Small : " << j << endl;
								}
							}
							else if (i < j)
							{
								cout << "i is Small : " << i << endl;
							}
							else
							{
								cout << "j is Small : " << j << endl;
							}
						}
						else if (h < i)
						{
							if (h < j)
							{
								cout << "h is Small : " << h << endl;
							}
							else
							{
								cout << "j is Small : " << j << endl;
							}
						}
						else if (i < j)
						{
							cout << "i is Small : " << i << endl;
						}
						else
						{
							cout << "j is Small : " << j << endl;
						}
					}
					else if (e < f)
					{
						if (e < g)
						{
							if (e < h)
							{
								if (e < i)
								{
									if (e < j)
									{
										cout << "e is Small : " << e << endl;
									}
									else
									{
										cout << "j is Small : " << j << endl;
									}
								}
								else if (i < j)
								{
									cout << "i is Small : " << i << endl;
								}
								else
								{
									cout << "j is Small : " << j << endl;
								}
							}
							else if (h < i)
							{
								if (h < j)
								{
									cout << "h is Small : " << h << endl;
								}
								else
								{
									cout << "j is Small : " << j << endl;
								}
							}
							else if (i < j)
							{
								cout << "i is Small : " << i << endl;
							}
							else
							{
								cout << "j is Small : " << j << endl;
							}
						}
						else if (g < h)
						{
							if (g < i)
							{
								if (g < j)
								{
									cout << "g is Small : " << g << endl;
								}
								else
								{
									cout << "j is Small : " << j << endl;
								}
							}
							else if (i < j)
							{
								cout << "i is Small : " << i << endl;
							}
							else
							{
								cout << "j is Small : " << j << endl;
							}
						}
						else if (h < i)
						{
							if (h < j)
							{
								cout << "h is Small : " << h << endl;
							}
							else
							{
								cout << "j is Small : " << j << endl;
							}
						}
						else if (i < j)
						{
							cout << "i is Small : " << i << endl;
						}
						else
						{
							cout << "j is Small : " << j << endl;
						}
					}
					else if (f < g)
					{
						if (f < h)
						{
							if (f < i)
							{
								if (f < j)
								{
									cout << "f is Small : " << f << endl;
								}
								else
								{
									cout << "j is Small : " << j << endl;
								}
							}
							else if (i < j)
							{
								cout << "i is Small : " << i << endl;
							}
							else
							{
								cout << "j is Small : " << j << endl;
							}
						}
						else if (h < i)
						{
							if (h < j)
							{
								cout << "h is Small : " << h << endl;
							}
							else
							{
								cout << "j is Small : " << j << endl;
							}
						}
						else if (i < j)
						{
							cout << "i is Small : " << i << endl;
						}
						else
						{
							cout << "j is Small : " << j << endl;
						}
					}
					else if (g < h)
					{
						if (g < i)
						{
							if (g < j)
							{
								cout << "g is Small : " << g << endl;
							}
							else
							{
								cout << "j is Small : " << j << endl;
							}
						}
						else if (i < j)
						{
							cout << "i is Small : " << i << endl;
						}
						else
						{
							cout << "j is Small : " << j << endl;
						}
					}
					else if (h < i)
					{
						if (h < j)
						{
							cout << "h is Small : " << h << endl;
						}
						else
						{
							cout << "j is Small : " << j << endl;
						}
					}
					else if (i < j)
					{
						cout << "i is Small : " << i << endl;
					}
					else
					{
						cout << "j is Small : " << j << endl;
					}
				}
				else if (d < e)
				{
					if (d < f)
					{
						if (d < g)
						{
							if (d < h)
							{
								if (d < i)
								{
									if (d < j)
									{
										cout << "d is Small : " << d << endl;
									}
									else
									{
										cout << "j is Small : " << j << endl;
									}
								}
								else if (i < j)
								{
									cout << "i is Small : " << i << endl;
								}
								else
								{
									cout << "j is Small : " << j << endl;
								}
							}
							else if (h < i)
							{
								if (h < j)
								{
									cout << "h is Small : " << h << endl;
								}
								else
								{
									cout << "j is Small : " << j << endl;
								}
							}
							else if (i < j)
							{
								cout << "i is Small : " << i << endl;
							}
							else
							{
								cout << "j is Small : " << j << endl;
							}
						}
						else if (g < h)
						{
							if (g < i)
							{
								if (g < j)
								{
									cout << "g is Small : " << g << endl;
								}
								else
								{
									cout << "j is Small : " << j << endl;
								}
							}
							else if (i < j)
							{
								cout << "i is Small : " << i << endl;
							}
							else
							{
								cout << "j is Small : " << j << endl;
							}
						}
						else if (h < i)
						{
							if (h < j)
							{
								cout << "h is Small : " << h << endl;
							}
							else
							{
								cout << "j is Small : " << j << endl;
							}
						}
						else if (i < j)
						{
							cout << "i is Small : " << i << endl;
						}
						else
						{
							cout << "j is Small : " << j << endl;
						}
					}
					else if (f < g)
					{
						if (f < h)
						{
							if (f < i)
							{
								if (f < j)
								{
									cout << "f is Small : " << f << endl;
								}
								else
								{
									cout << "j is Small : " << j << endl;
								}
							}
							else if (i < j)
							{
								cout << "i is Small : " << i << endl;
							}
							else
							{
								cout << "j is Small : " << j << endl;
							}
						}
						else if (h < i)
						{
							if (h < j)
							{
								cout << "h is Small : " << h << endl;
							}
							else
							{
								cout << "j is Small : " << j << endl;
							}
						}
						else if (i < j)
						{
							cout << "i is Small : " << i << endl;
						}
						else
						{
							cout << "j is Small : " << j << endl;
						}
					}
					else if (g < h)
					{
						if (g < i)
						{
							if (g < j)
							{
								cout << "g is Small : " << g << endl;
							}
							else
							{
								cout << "j is Small : " << j << endl;
							}
						}
						else if (i < j)
						{
							cout << "i is Small : " << i << endl;
						}
						else
						{
							cout << "j is Small : " << j << endl;
						}
					}
					else if (h < i)
					{
						if (h < j)
						{
							cout << "h is Small : " << h << endl;
						}
						else
						{
							cout << "j is Small : " << j << endl;
						}
					}
					else if (i < j)
					{
						cout << "i is Small : " << i << endl;
					}
					else
					{
						cout << "j is Small : " << j << endl;
					}
				}
				else if (e < f)
				{
					if (e < g)
					{
						if (e < h)
						{
							if (e < i)
							{
								if (e < j)
								{
									cout << "e is Small : " << e << endl;
								}
								else
								{
									cout << "j is Small : " << j << endl;
								}
							}
							else if (i < j)
							{
								cout << "i is Small : " << i << endl;
							}
							else
							{
								cout << "j is Small : " << j << endl;
							}
						}
						else if (h < i)
						{
							if (h < j)
							{
								cout << "h is Small : " << h << endl;
							}
							else
							{
								cout << "j is Small : " << j << endl;
							}
						}
						else if (i < j)
						{
							cout << "i is Small : " << i << endl;
						}
						else
						{
							cout << "j is Small : " << j << endl;
						}
					}
					else if (g < h)
					{
						if (g < i)
						{
							if (g < j)
							{
								cout << "g is Small : " << g << endl;
							}
							else
							{
								cout << "j is Small : " << j << endl;
							}
						}
						else if (i < j)
						{
							cout << "i is Small : " << i << endl;
						}
						else
						{
							cout << "j is Small : " << j << endl;
						}
					}
					else if (h < i)
					{
						if (h < j)
						{
							cout << "h is Small : " << h << endl;
						}
						else
						{
							cout << "j is Small : " << j << endl;
						}
					}
					else if (i < j)
					{
						cout << "i is Small : " << i << endl;
					}
					else
					{
						cout << "j is Small : " << j << endl;
					}
				}
				else if (f < g)
				{
					if (f < h)
					{
						if (f < i)
						{
							if (f < j)
							{
								cout << "f is Small : " << f << endl;
							}
							else
							{
								cout << "j is Small : " << j << endl;
							}
						}
						else if (i < j)
						{
							cout << "i is Small : " << i << endl;
						}
						else
						{
							cout << "j is Small : " << j << endl;
						}
					}
					else if (h < i)
					{
						if (h < j)
						{
							cout << "h is Small : " << h << endl;
						}
						else
						{
							cout << "j is Small : " << j << endl;
						}
					}
					else if (i < j)
					{
						cout << "i is Small : " << i << endl;
					}
					else
					{
						cout << "j is Small : " << j << endl;
					}
				}
				else if (g < h)
				{
					if (g < i)
					{
						if (g < j)
						{
							cout << "g is Small : " << g << endl;
						}
						else
						{
							cout << "j is Small : " << j << endl;
						}
					}
					else if (i < j)
					{
						cout << "i is Small : " << i << endl;
					}
					else
					{
						cout << "j is Small : " << j << endl;
					}
				}
				else if (h < i)
				{
					if (h < j)
					{
						cout << "h is Small : " << h << endl;
					}
					else
					{
						cout << "j is Small : " << j << endl;
					}
				}
				else if (i < j)
				{
					cout << "i is Small : " << i << endl;
				}
				else
				{
					cout << "j is Small : " << j << endl;
				}
			}
			
			else if (b < c)
			{
				if (b < d)
				{
					if (b < e)
					{
						if (b < f)
						{
							if (b < g)
							{
								if (b < h)
								{
									if (b < i)
									{
										if (b < j)
										{
											cout << "b is Small : " << b << endl;
										}
										else
										{
											cout << "j is Small : " << j << endl;
										}
									}
									else if (i < j)
									{
										cout << "i is Small : " << i << endl;
									}
									else
									{
										cout << "j is Small : " << j << endl;
									}
								}
								else if (h < i)
								{
									if (h < j)
									{
										cout << "h is Small : " << h << endl;
									}
									else
									{
										cout << "j is Small : " << j << endl;
									}
								}
								else if (i < j)
								{
									cout << "i is Small : " << i << endl;
								}
								else
								{
									cout << "j is Small : " << j << endl;
								}
							}
							else if (g < h)
							{
								if (g < i)
								{
									if (g < j)
									{
										cout << "g is Small : " << g << endl;
									}
									else
									{
										cout << "j is Small : " << j << endl;
									}
								}
								else if (i < j)
								{
									cout << "i is Small : " << i << endl;
								}
								else
								{
									cout << "j is Small : " << j << endl;
								}
							}
							else if (h < i)
							{
								if (h < j)
								{
									cout << "h is Small : " << h << endl;
								}
								else
								{
									cout << "j is Small : " << j << endl;
								}
							}
							else if (i < j)
							{
								cout << "i is Small : " << i << endl;
							}
							else
							{
								cout << "j is Small : " << j << endl;
							}
						}
						else if (f < g)
						{
							if (f < h)
							{
								if (f < i)
								{
									if (f < j)
									{
										cout << "f is Small : " << f << endl;
									}
									else
									{
										cout << "j is Small : " << j << endl;
									}
								}
								else if (i < j)
								{
									cout << "i is Small : " << i << endl;
								}
								else
								{
									cout << "j is Small : " << j << endl;
								}
							}
							else if (h < i)
							{
								if (h < j)
								{
									cout << "h is Small : " << h << endl;
								}
								else
								{
									cout << "j is Small : " << j << endl;
								}
							}
							else if (i < j)
							{
								cout << "i is Small : " << i << endl;
							}
							else
							{
								cout << "j is Small : " << j << endl;
							}
						}
						else if (g < h)
						{
							if (g < i)
							{
								if (g < j)
								{
									cout << "g is Small : " << g << endl;
								}
								else
								{
									cout << "j is Small : " << j << endl;
								}
							}
							else if (i < j)
							{
								cout << "i is Small : " << i << endl;
							}
							else
							{
								cout << "j is Small : " << j << endl;
							}
						}
						else if (h < i)
						{
							if (h < j)
							{
								cout << "h is Small : " << h << endl;
							}
							else
							{
								cout << "j is Small : " << j << endl;
							}
						}
						else if (i < j)
						{
							cout << "i is Small : " << i << endl;
						}
						else
						{
							cout << "j is Small : " << j << endl;
						}
					}
					else if (e < f)
					{
						if (e < g)
						{
							if (e < h)
							{
								if (e < i)
								{
									if (e < j)
									{
										cout << "e is Small : " << e << endl;
									}
									else
									{
										cout << "j is Small : " << j << endl;
									}
								}
								else if (i < j)
								{
									cout << "i is Small : " << i << endl;
								}
								else
								{
									cout << "j is Small : " << j << endl;
								}
							}
							else if (h < i)
							{
								if (h < j)
								{
									cout << "h is Small : " << h << endl;
								}
								else
								{
									cout << "j is Small : " << j << endl;
								}
							}
							else if (i < j)
							{
								cout << "i is Small : " << i << endl;
							}
							else
							{
								cout << "j is Small : " << j << endl;
							}
						}
						else if (g < h)
						{
							if (g < i)
							{
								if (g < j)
								{
									cout << "g is Small : " << g << endl;
								}
								else
								{
									cout << "j is Small : " << j << endl;
								}
							}
							else if (i < j)
							{
								cout << "i is Small : " << i << endl;
							}
							else
							{
								cout << "j is Small : " << j << endl;
							}
						}
						else if (h < i)
						{
							if (h < j)
							{
								cout << "h is Small : " << h << endl;
							}
							else
							{
								cout << "j is Small : " << j << endl;
							}
						}
						else if (i < j)
						{
							cout << "i is Small : " << i << endl;
						}
						else
						{
							cout << "j is Small : " << j << endl;
						}
					}
					else if (f < g)
					{
						if (f < h)
						{
							if (f < i)
							{
								if (f < j)
								{
									cout << "f is Small : " << f << endl;
								}
								else
								{
									cout << "j is Small : " << j << endl;
								}
							}
							else if (i < j)
							{
								cout << "i is Small : " << i << endl;
							}
							else
							{
								cout << "j is Small : " << j << endl;
							}
						}
						else if (h < i)
						{
							if (h < j)
							{
								cout << "h is Small : " << h << endl;
							}
							else
							{
								cout << "j is Small : " << j << endl;
							}
						}
						else if (i < j)
						{
							cout << "i is Small : " << i << endl;
						}
						else
						{
							cout << "j is Small : " << j << endl;
						}
					}
					else if (g < h)
					{
						if (g < i)
						{
							if (g < j)
							{
								cout << "g is Small : " << g << endl;
							}
							else
							{
								cout << "j is Small : " << j << endl;
							}
						}
						else if (i < j)
						{
							cout << "i is Small : " << i << endl;
						}
						else
						{
							cout << "j is Small : " << j << endl;
						}
					}
					else if (h < i)
					{
						if (h < j)
						{
							cout << "h is Small : " << h << endl;
						}
						else
						{
							cout << "j is Small : " << j << endl;
						}
					}
					else if (i < j)
					{
						cout << "i is Small : " << i << endl;
					}
					else
					{
						cout << "j is Small : " << j << endl;
					}
				}
				else if (d < e)
				{
					if (d < f)
					{
						if (d < g)
						{
							if (d < h)
							{
								if (d < i)
								{
									if (d < j)
									{
										cout << "d is Small : " << d << endl;
									}
									else
									{
										cout << "j is Small : " << j << endl;
									}
								}
								else if (i < j)
								{
									cout << "i is Small : " << i << endl;
								}
								else
								{
									cout << "j is Small : " << j << endl;
								}
							}
							else if (h < i)
							{
								if (h < j)
								{
									cout << "h is Small : " << h << endl;
								}
								else
								{
									cout << "j is Small : " << j << endl;
								}
							}
							else if (i < j)
							{
								cout << "i is Small : " << i << endl;
							}
							else
							{
								cout << "j is Small : " << j << endl;
							}
						}
						else if (g < h)
						{
							if (g < i)
							{
								if (g < j)
								{
									cout << "g is Small : " << g << endl;
								}
								else
								{
									cout << "j is Small : " << j << endl;
								}
							}
							else if (i < j)
							{
								cout << "i is Small : " << i << endl;
							}
							else
							{
								cout << "j is Small : " << j << endl;
							}
						}
						else if (h < i)
						{
							if (h < j)
							{
								cout << "h is Small : " << h << endl;
							}
							else
							{
								cout << "j is Small : " << j << endl;
							}
						}
						else if (i < j)
						{
							cout << "i is Small : " << i << endl;
						}
						else
						{
							cout << "j is Small : " << j << endl;
						}
					}
					else if (f < g)
					{
						if (f < h)
						{
							if (f < i)
							{
								if (f < j)
								{
									cout << "f is Small : " << f << endl;
								}
								else
								{
									cout << "j is Small : " << j << endl;
								}
							}
							else if (i < j)
							{
								cout << "i is Small : " << i << endl;
							}
							else
							{
								cout << "j is Small : " << j << endl;
							}
						}
						else if (h < i)
						{
							if (h < j)
							{
								cout << "h is Small : " << h << endl;
							}
							else
							{
								cout << "j is Small : " << j << endl;
							}
						}
						else if (i < j)
						{
							cout << "i is Small : " << i << endl;
						}
						else
						{
							cout << "j is Small : " << j << endl;
						}
					}
					else if (g < h)
					{
						if (g < i)
						{
							if (g < j)
							{
								cout << "g is Small : " << g << endl;
							}
							else
							{
								cout << "j is Small : " << j << endl;
							}
						}
						else if (i < j)
						{
							cout << "i is Small : " << i << endl;
						}
						else
						{
							cout << "j is Small : " << j << endl;
						}
					}
					else if (h < i)
					{
						if (h < j)
						{
							cout << "h is Small : " << h << endl;
						}
						else
						{
							cout << "j is Small : " << j << endl;
						}
					}
					else if (i < j)
					{
						cout << "i is Small : " << i << endl;
					}
					else
					{
						cout << "j is Small : " << j << endl;
					}
				}
				else if (e < f)
				{
					if (e < g)
					{
						if (e < h)
						{
							if (e < i)
							{
								if (e < j)
								{
									cout << "e is Small : " << e << endl;
								}
								else
								{
									cout << "j is Small : " << j << endl;
								}
							}
							else if (i < j)
							{
								cout << "i is Small : " << i << endl;
							}
							else
							{
								cout << "j is Small : " << j << endl;
							}
						}
						else if (i < j)
						{
							cout << "i si Small : " << i << endl;
						}
						else
						{
							cout << "j is Small : " << j << endl;
						}
					}
					else if (g < h)
					{
						if (g < i)
						{
							if (g < j)
							{
								cout << "g is Small : " << g << endl;
							}
							else
							{
								cout << "j is Small : " << j << endl;
							}
						}
						else if (i < j)
						{
							cout << "i is Small : " << i << endl;
						}
						else
						{
							cout << "j is Small : " << j << endl;
						}
					}
					else if (h < i)
					{
						if (h < j)
						{
							cout << "h is Small : " << h << endl;
						}
						else
						{
							cout << "j is Small : " << j << endl;
						}
					}
					else if (i < j)
					{
						cout << "i is Small : " << i << endl;
					}
					else
					{
						cout << "j is Small : " << j << endl;
					}
				}
				else if (f < g)
				{
					if (f < h)
					{
						if (f < i)
						{
							if (f < j)
							{
								cout << "f is Small : " << f << endl;
							}
							else
							{
								cout << "j is Small : " << j << endl;
							}
						}
						else if (i < j)
						{
							cout << "i is Small : " << i << endl;
						}
						else
						{
							cout << "j is Small : " << j << endl;
						}
					}
					else if (h < i)
					{
						if (h < j)
						{
							cout << "h is Small : " << h << endl;
						}
						else
						{
							cout << "j is Small : " << j << endl;
						}
					}
					else if (i < j)
					{
						cout << "i is Small : " << i << endl;
					}
					else
					{
						cout << "j is Small : " << j << endl;
					}
				}
				else if (g < h)
				{
					if (g < i)
					{
						if (g < j)
						{
							cout << "g is Small : " << g << endl;
						}
						else
						{
							cout << "j is Small : " << j << endl;
						}
					}
					else if (i < j)
					{
						cout << "i is Small : " << i << endl;
					}
					else
					{
						cout << "j is Small : " << j << endl;
					}
				}
				else if (h < i)
				{
					if (h < j)
					{
						cout << "h is Small : " << h << endl;
					}
					else
					{
						cout << "j is Small : " << j << endl;
					}
				}
				else if (i < j)
				{
					cout << "i is Small : " << i << endl;
				}
				else
				{
					cout << "j is Small : " << j << endl;
				}
			}
			
			else if (c < d)
			{
				if (c < e)
				{
					if (c < f)
					{
						if (c < g)
						{
							if (c < h)
							{
								if (c < i)
								{
									if (c < j)
									{
										cout << "c is Small : " << endl;
									}
									else
									{
										cout << "j is Small : " << j << endl;
									}
								}
								else if (i < j)
								{
									cout << "i is Small : " << i << endl;
								}
								else
								{
									cout << "j is Small : " << j << endl;
								}
							}
							else if (h < i)
							{
								if (h < j)
								{
									cout << "h is Small : " << h << endl;
								}
								else
								{
									cout << "j is Small : " << j << endl;
								}
							}
							else if (i < j)
							{
								cout << "i is Small : " << i << endl;
							}
							else
							{
								cout << "j is Small : " << j << endl;
							}
						}
						else if (g < h)
						{
							if (g < i)
							{
								if (g < j)
								{
									cout << "g is Small : " << g << endl;
								}
								else
								{
									cout << "j is Small : " << j << endl;
								}
							}
							else if (i < j)
							{
								cout << "i is Small : " << i << endl;
							}
							else
							{
								cout << "j is Small : " << j << endl;
							}
						}
						else if (h < i)
						{
							if (h < j)
							{
								cout << "h is Small : " << h << endl;
							}
							else
							{
								cout << "j is Small : " << j << endl;
							}
						}
						else if (i < j)
						{
							cout << "i is Small : " << i << endl;
						}
						else
						{
							cout << "j is Small : " << j << endl;
						}
					}
					else if (f < g)
					{
						if (f < h)
						{
							if (f < i)
							{
								if (f < j)
								{
									cout << "f is Small : " << f << endl;
								}
								else
								{
									cout << "j is Small : " << j << endl;
								}
							}
							else if (i < j)
							{
								cout << "i is Small : " << i << endl;
							}
							else
							{
								cout << "j is Small : " << j << endl;
							}
						}
						else if (h < i)
						{
							if (h < j)
							{
								cout << "h is Small : " << h << endl;
							}
							else
							{
								cout << "j is Small : " << j << endl;
							}
						}
						else if (i < j)
						{
							cout << "i is Small : " << i << endl;
						}
						else
						{
							cout << "j is Small : " << j << endl;
						}
					}
					else if (g < h)
					{
						if (g < i)
						{
							if (g < j)
							{
								cout << "g is Small : " << g << endl;
							}
							else
							{
								cout << "j is Small : " << j << endl;
							}
						}
						else if (i < j)
						{
							cout << "i is Small : " << i << endl;
						}
						else
						{
							cout << "j is Small : " << j << endl;
						}
					}
					else if (h < i)
					{
						if (h < j)
						{
							cout << "h is Samll : " << h << endl;
						}
						else
						{
							cout << "j is Small : " << j << endl;
						}
					}
					else if (i < j)
					{
						cout << "i is Small : " << i << endl;
					}
					else
					{
						cout << "j is Small : " << j << endl;
					}
				}
				else if (e < f)
				{
					if (e < g)
					{
						if (e < h)
						{
							if (e < i)
							{
								if (e < j)
								{
									cout << "e is Small : " << e << endl;
								}
								else
								{
									cout << "j is Small : " << j << endl;
								}
							}
							else if (i < j)
							{
								cout << "i is Small : " << i << endl;
							}
							else
							{
								cout << "j is Small : " << j << endl;
							}
						}
						else if (i < j)
						{
							cout << "i is Small : " << i << endl;
						}
						else
						{
							cout << "j is Small : " << j << endl;
						}
					}
					else if (g < h)
					{
						if (g < i)
						{
							if (g < j)
							{
								cout << "g is Small : " << g << endl;
							}
							else
							{
								cout << "j is Small : " << j << endl;
							}
						}
						else if (i < j)
						{
							cout << "i is Small : " << i << endl;
						}
						else
						{
							cout << "j is Small : " << j << endl;
						}
					}
					else if (h < i)
					{
						if (h < j)
						{
							cout << "h is Small : " << h << endl;
						}
						else
						{
							cout << "j is Small : " << j << endl;
						}
					}
					else if (i < j)
					{
						cout << "i is Small : " << i << endl;
					}
					else
					{
						cout << "j is Small : " << j << endl;
					}
				}
				else if (f < g)
				{
					if (f < h)
					{
						if (f < i)
						{
							if (f < j)
							{
								cout << "f is Small : " << f << endl;
							}
							else
							{
								cout << "j is Small : " << j << endl;
							}
						}
						else if (f < j)
						{
							cout << "f is Small : " << f << endl;
						}
						else
						{
							cout << "j is Small : " << j << endl;
						}
					}
					else if (h < i)
					{
						if (h < j)
						{
							cout << "h is Small : " << h << endl;
						}
						else
						{
							cout << "j is Small : " << j << endl;
						}
					}
					else if (i < j)
					{
						cout << "i is Small : " << i << endl;
					}
					else
					{
						cout << "j is Small : " << j << endl;
					}
				}
				else if (g < h)
				{
					if (g < i)
					{
						if (g < j)
						{
							cout << "g is Small : " << g << endl;
						}
						else
						{
							cout << "j is Small : " << j << endl;
						}
					}
					else if (i < j)
					{
						cout << "i is Small : " << i << endl;
					}
					else
					{
						cout << "j is Small : " << j << endl;
					}
				}
				else if (h < i)
				{
					if (h < j)
					{
						cout << "h is Small : " << h << endl;
					}
					else
					{
						cout << "j is Small : " << j << endl;
					}
				}
				else if (i < j)
				{
					cout << "i is Small : " << i << endl;
				}
				else
				{
					cout << "j is Small : " << j << endl;
				}
			}
			
			else if (d < e)
			{
				if (d < f)
				{
					if (d < g)
					{
						if (d < h)
						{
							if (d < i)
							{
								if (d < j)
								{
									cout << "d is Small : " << d << endl;
								}
								else
								{
									cout << "j is Small : " << j << endl;
								}
							}
							else if (i < j)
							{
								cout << "i is Small : " << i << endl;
							}
							else
							{
								cout << "j is Small : " << j << endl;
							}
						}
						else if (h < i)
						{
							if (h < j)
							{
								cout << "h is Small : " << h << endl;
							}
							else
							{
								cout << "j is Small : " << j << endl;
							}
						}
						else if (i < j)
						{
							cout << "i is Small : " << i << endl;
						}
						else
						{
							cout << "j is Small : " << j << endl;
						}
					}
					else if (g < h)
					{
						if (g < i)
						{
							if (g < j)
							{
								cout << "g is Small : " << g << endl;
							}
							else
							{
								cout << "j is Small : " << j << endl;
							}
						}
						else if (i < j)
						{
							cout << " i is Small : " << i << endl;
						}
						else
						{
							cout << "j is Small : " << j << endl;
						}
					}
					else if (h < i)
					{
						if (h < j)
						{
							cout << "h is Small : " << h << endl;
						}
						else
						{
							cout << "j is Small : " << j << endl;
						}
					}
					else if (i < j)
					{
						cout << "i is Small : " << i << endl;
					}
					else
					{
						cout << "j is Small : " << j << endl;
					}
				}
				else if (f < g)
				{
					if (f < h)
					{
						if (f < i)
						{
							if (f < j)
							{
								cout << "f is Small : " << f << endl;
							}
							else
							{
								cout << "j is Small : " << j << endl;
							}
						}
						else if (i < j)
						{
							cout << "i is Small : " << i << endl;
						}
						else
						{
							cout << "j is Small : " << j << endl;
						}
					}
					else if (h < i)
					{
						if (h < j)
						{
							cout << "h is Small : " << h << endl;
						}
						else
						{
							cout << "j is Small : " << j << endl;
						}
					}
					else if (i < j)
					{
						cout << "i is Small : " << endl;
					}
					else
					{
						cout << "j is Small : " << j << endl;
					}
				}
				else if (g < h)
				{
					if (g < i)
					{
						if (g < j)
						{
							cout << "g is Small : " << g << endl;
						}
						else
						{
							cout << "j is Small : " << j << endl;
						}
					}
					else if (i < j)
					{
						cout << "i is Small : " << i << endl;
					}
					else
					{
						cout << "j is Small : " << j << endl;
					}
				}
				else if (h < i)
				{
					if (h < j)
					{
						cout << "h is Small : " << h << endl;
					}
					else
					{
						cout << "j is Small : " << j << endl;
					}
				}
				else if (i < j)
				{
					cout << "i is Small : " << i << endl;
				}
				else
				{
					cout << "j is Small : " << j << endl;
				}
			}
			
			else if (e < f)
			{
				if (e < g)
				{
					if (e < h)
					{
						if (e < i)
						{
							if (e < j)
							{
								cout << "e is Small : " << e << endl;
							}
							else
							{
								cout << "j is Small : " << j << endl;
							}
						}
						if (i < j)
						{
							cout << "i is Small : " << i << endl;
						}
						else
						{
							cout << "j is Small : " << j << endl;
						}
					}
					else if (h < i)
					{
						if (h < j)
						{
							cout << "h is Small : " << h << endl;
						}
						else
						{
							cout << "j is Small : " << j << endl;
						}
					}
					else if (i < j)
					{
						cout << "i is Small : " << i << endl;
					}
					else
					{
						cout << "j is Small : " << j << endl;
					}
				}
				else if (g < h)
				{
					if (g < i)
					{
						if (g < j)
						{
							cout << "g is Small : " << g << endl;
						}
						else
						{
							cout << "j is Small : " << j << endl;
						}
					}
					else if (i < j)
					{
						cout << "i is Small : " << i << endl;
					}
					else
					{
						cout << "j is Small : " << j << endl;
					}
				}
				else if (h < i)
				{
					if (h < j)
					{
						cout << "h is Small : " << endl;
					}
					else
					{
						cout << "j is Small : " << endl;
					}
				}
				else if (i < j)
				{
					cout << "i is Small : " << i << endl;
				}
				else
				{
					cout << "j is Small : " << j << endl;
				}
			}
			
			else if (f < g)
			{
				if (f < h)
				{
					if (f < i)
					{
						if (f < j)
						{
							cout << "f is Small : " << f << endl;
						}
						else
						{
							cout << "j is Small : " << j << endl;
						}
					}
					else if (i < j)
					{
						cout << "i is Small : " << i << endl;
					}
					else
					{
						cout << "j is Small : " << j << endl;
					}
				}
				else if (h < i)
				{
					if (h < j)
					{
						cout << "h is Small : " << h << endl;
					}
					else
					{
						cout << "j is Small : " << j << endl;
					}
				}
				else if (i < j)
				{
					cout << "i is Small : " << i << endl;
				}
				else
				{
					cout << "j is Small : " << j << endl;
				}
			}
	
			else if (g < h)
			{
				if (g < i)
				{
					if (g < j)
					{
						cout << "g is Small : " << g << endl;
					}
					else
					{
						cout << "j is Small : " << j << endl;
					}
				}
				else if (i < j)
				{
					cout << "i is Small : " << i << endl;
				}
				else
				{
					cout << "j is Small : " << j << endl;
				}
			}
			else if (h < i)
			{
				if (h < j)
				{
					cout << "h is Small : " << h << endl;
				}
				else
				{
					cout << "j is Small : " << j << endl;
				}
			}
			else if (i < j)
			{
				cout << "i is Small : " << i << endl;
			}
			else
			{
				cout << "j is Small : " << j << endl;
			}

		}

};

int main()
{

	small_1 done;

	done.small();

}
