/*
Source: https://www.codeground.org/practice/practiceProblemViewNew

숫자 골라내기

초등학교교 학생인 정우와 석환이는 최근 학교에서 두 이진수의 XOR 연산에 대해 배웠다.
 둘은 매우 영특한 학생이라 새로 배운 연산을 갖고 이리저리 장난치기 시작했다.
 다만 석환이는 정우에게 일을 시키는 것을 좋아하는지라 다음과 같은 제안을 했다.

“내가 N개의 10진수를 주면, 등장하는 숫자들 중 홀수번만 나타나는 숫자들을 모두 XOR한 결과를 구해줘.”

예를 들어 '2, 5, 3, 3' 이 주어질 경우, '2'와'5'는 1번(홀수 번) 나타나고 '3' 은 2번 (짝수 번) 나타나므로
홀수 번 나타난 '2' 와 '5'를 XOR 한 결과를 구해야 하고,
'2, 5, 3, 3, 2, 4, 5, 3' 이 주어질 경우 '2' 와 '5' 는 2번 나타나고, '3' 은 3번, '4' 는 1번 나타나므로
홀수 번 나타난 '3' 과 '4'를 XOR 한 결과를 구해야 한다.

정우는 제안을 수락했지만, 가면 갈수록 매번 XOR 연산을 수행하는 일에 지치고 있다.
정우를 도와서 주어 진 문제를 해결하는 프로그램을 작성하라.
*/
#include <iostream>
using namespace std;
int Answer;

int main(int argc, char** argv){
	int T, N, num;
	cin >> T;

	for(int i=0; i<T; i++){
		Answer = 0;
		cin >> N;
		for(int j=0; j<N; j++){
			cin >> num;
			Answer = Answer ^ num;
		}
		cout << "Case #" << i + 1 << endl;
    	cout << Answer << endl;
	}

	

	return 0;
}

