int generate_subsets_recursively(int counter, int end, set<int> my_set, set<set<int>> &subsets)
{

	if (counter <= end)
	{
		set<int> clone = my_set;
		my_set.insert(counter);
		if (counter == end)
		{
			subsets.insert(clone);
			subsets.insert(my_set);
		}
		generate_subsets_recursively(++counter, end, clone, subsets);
		generate_subsets_recursively(counter, end, my_set, subsets);
	}

	return 0;
}
