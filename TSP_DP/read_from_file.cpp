int** read_from_file(vector<int> &cities)
{
	int** tab_costs;

	string name;
	cout << "Write a name of the file to read: ";
	cin >> name;

	// open the file
	ifstream infile;
	infile.open(name);

	if (infile.is_open())
	{
		string line;
		int i = 3;
		while (i>0)					// show first 3 lines
		{
			getline(infile, line);
			cout << line << "\n";
			i--;
		}

		int dimension;					// get the dimension from 4th line
		infile >> line >> dimension;
		cout << line << dimension;

		i = 4;
		while (i>0)					// show the rest of the head
		{
			getline(infile, line);
			cout << line << "\n";
			i--;
		}

		// generate names of the cities
		for (int i = 1; i < dimension; i++)
			cities.push_back(i);				

		// read the costs and store them in the dynamic table

		tab_costs = new int *[dimension];
		for (int i = 0; i < dimension; i++)
			tab_costs[i] = new int[dimension];

		i = 0;							// counter to prevent from reading more than (dimension * dimension) numbers
		int num;						// to store the number
		int x = 0, y = 0;				// x, y to move inside the table
		while (infile >> num && i < dimension * dimension)
		{
			if (!(x % dimension) & x>0)	// go to next row, after reading all columns
			{
				cout << "\n";
				y++;
				x = 0;
			}
			cout << num << ", ";
			tab_costs[y][x] = num;
			i++;
			x++;
		}

	}
	else
	{
		cout << "I can't read the file. I'm reading exemplary data\n";
		_getch();
		cities = vector<int>{ 1, 2, 3 };
		tab_costs = new int *[4];
		for (int i = 0; i < 4; i++)
			tab_costs[i] = new int[4];

		tab_costs[0] = new int[4]{ 0,  1, 15,  6 };
		tab_costs[1] = new int[4]{ 2, 0, 7, 3 };
		tab_costs[2] = new int[4]{ 9, 6, 0, 12 };
		tab_costs[3] = new int[4]{ 10, 4, 8, 0 };

	}
	return tab_costs;
}
