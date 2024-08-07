
int main() {
	int numero, t, pid, time, j = 0, acc = 0;
	scanf("%u %u", &numero, &t);
	std::vector<std::pair<unsigned int, int> > p;
	for (auto i = 0; i < numero; i++) {
		scanf("%u %u", &pid, &time);
		p.push_back(std::make_pair(pid, time*1000));
	}


	while (numero) {
		p[j].second -= t;
		acc += t;
		if (p[j].second <= 0) {
			acc += p[j].second;
			printf("%u (%u)\n", p[j].first, acc);
			p.erase(p.begin() + j);
			if (j == --numero) j = 0;
		} else if (++j == numero) j = 0;
	}
	return 0;
} 
