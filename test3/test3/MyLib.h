#pragma once
#include<vector>
#include<ctime>

using namespace std;

public struct pos {
	pos() {

	}
	pos(int X, int Y) {
		x = X;
		y = Y;
	}
	
	int x, y;
};

class Snake {

public:
	Snake() {
		add();
	}
	Snake(int X, int  Y) {
		x = X;
		y = Y;
		//body = new pos[4];
		add();
	}
	Snake(int X, int Y, int N) {
		x = X;
		y = Y;
		napr = N;
		add(x,y);

	}
	int GetX() {
		return x;
	}
	int GetY() {
		return y;
	}
	void SetX(int X) {
		x = X;
	}
	void SetY(int Y) {
		y = Y;
	}
	void SetSize(int i) {
		if (body.size() < i) {
			pos n;
			n.x = 0;
			n.y = 0;
			body.push_back(n);
		}
	}
	int  Go(int block) {
		if (block == 1 || block == 3) {
			for (int i = body.size() - 1; i > 0; i--) {

				body[i].x = body[i - 1].x;
				body[i].y = body[i - 1].y;
			}
			body[0].x = x;
			body[0].y = y;
			if (x == 2 && y == 0 && napr == 0) {
				x = 52;
				y = 54;
			}
			else if (x == 52 && y == 54 && napr == 2) {
				x = 2;
				y = 0;
			}
			x += hr[napr];
			y += vr[napr];
			return -1;
		}
		else if(block == 4){
			body.push_back(body[body.size() - 1]);
			//x += hr[napr];
			//y += vr[napr];
			return 1;
		}
	}
	void run(int block) {
		if (block == 1 || block == 3 || block == 5) {
			for (int i = body.size() - 1; i > 0; i--) {
		
				body[i].x = body[i - 1].x;
				body[i].y = body[i - 1].y;
			}
			body[0].x = x;
			body[0].y = y;
		}
	}

	void SetNapr(int k) {
		napr = k;
	}
	int  GetNapr() {
		//napr = k;
		return napr;
	}

	pos GetSell(int i) {
		return body[i];
	}
	int GetSize() {
		if (body.size() != NULL) {
			return body.size();
		}
		else return 0;
	}
	pos GetNB() {
		return pos(x+hr[napr],y+vr[napr]);
	}
	pos tryGeetNB(int N) {
		return pos(x + hr[N], y + vr[N]);
	}

private:
	void add(int x = 2,int y = 0) {
		pos n(x, y);
		for (int i = 0; i< 5; i++) {
			body.push_back(n);
		}
	}
	int x, y;
	int napr = 2;
	int hr[4] = { 0,1,0,-1 }, vr[4] = { -1,0,1,0 };
	vector<pos> body;
	//pos block;


};

class Fruit {
public :
	Fruit() {

	}
	Fruit(int X, int Y) {
		x = X; 
		y = Y;
	}
	int  GetX() {
		return x;
	}
	int GetY() {
		return y;

	}
	void SetX(int X) {
		x = X;
	}
	void SetY(int Y) {
		y = Y;
	}
	//void Create() {
	//	srand(time(0));
		//x = rand() % 55;
		//y = rand() % 55;
	//}
private:
	int x, y;
};
