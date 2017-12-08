class Costs {
private:
	int destination;						
	set<int> intermediate_set;				
	int cost;								// minimal cost
	int parent;								
public:
	bool equals(Costs k)
	{
		if (docelowy == k.docelowy && zbior == k.zbior)
			return true;
		else
			return false;
	}
	int get_destination() { return destination; }
	set<int> get_intermediate_set() { return intermediate_set; }
	int get_cost() { return cost; }
	void set_cost(int k) { cost = k; }
	int get_parent() { return parent; }
	void set_parent(int r) { parent = r; }
	Costs() {}
	Costs(int destination, set<int> intermediate_set)
	{
		this->docelowy = docelowy;
		this->zbior = zbior_posredniczacy;
	}
	~Costs() {}
};
