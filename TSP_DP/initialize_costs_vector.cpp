void initialize_costs_vector(vector<Costs> &costs, vector<set<int>> &subsets, vector<int> cities, bool show_indirect_results)
{
	for (set<int> my_set : subsets)
	{
		for (int city : cities)
		{
			if (my_set.find(city) == my_set.end())
			{
				if (show_indirect_results)
					cout << "[" << city << ", " << toString(my_set) << "]\n";
				costs.push_back(Costs(city, my_set));
			}
		}
	}
	if (show_indirect_results)
		cout << "[" << 0 << ", " << toString((subsets.back())) << "]\n";
	costs.push_back(Costs(0, subsets.back()));
}
