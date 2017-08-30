class Peach {
private: 
	int weight;
public:
	friend void setWeight(Peach&, int); // 함수를 friend로 선언
	int getWeight();
};


