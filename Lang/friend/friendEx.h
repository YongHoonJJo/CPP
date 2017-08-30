class Apple {
friend class Box; // Box class를 자신의 friend class로 선언
private: 
	int weight;
public:
	int getWeight();
};

class Box {
private:
	int volume;
public:
	Box(int);
	void setAppleWeight(Apple&, int); // !!
	int getVolume();
};
