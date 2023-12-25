/*
거스름돈
Source: https://www.acmicpc.net/problem/5585
2023/01/01
*/

#include <iostream>

using namespace std;

int main(){
	int price, result = 0, coin;
	cin >> price;

	price = 1000 - price;

	while(price > 0){
		if(price >= 500){
			coin = price/500;
			result += coin;
			price -= (500*coin);
		}else if(price >= 100){
			coin = price/100;
			result += coin;
			price -= (100*coin);
		}else if(price >= 50){
			coin = price/50;
			result += coin;
			price -= (50*coin);
		}else if(price >= 10){
			coin = price/10;
			result += coin;
			price -= (10*coin);
		}else if(price >= 5){
			coin = price/5;
			result += coin;
			price -= (5*coin);
		}else{
			result += price;
			price = 0;
		}
	}

	cout << result << endl;
	return 0;
}