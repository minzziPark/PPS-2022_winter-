#include <iostream>
#include <vector>

using namespace std;

struct Node{
	vector<int> node;
	int virus;
	Node (int i = 0, Node *p = nullptr) {
		virus = 0;
	}
	~Node() {}
};

int main(){
	int n;
	cin >> n;

	Node * nodes = new Node[n+1];

	int idx = 0;
	int node_num = 0;
	int virus_num = 0;
	int connect;
	cin >> connect;

	for(int i=0; i<connect; i++){
		cin >> idx;
		cin >> node_num;
		nodes[idx].node.push_back(node_num);
		nodes[idx].virus = 0;
	}
	nodes[1].virus = 1;

	//아마도 재귀로 가야할 듯(수정 필요)
	for(int i=1; i<=n; i++){
		if(nodes[i].virus == 1){
			for(int j=0; j<nodes[i].node.size(); j++){
				int idx = nodes[i].node[j];
				if(nodes[idx].virus == 0){
					nodes[idx].virus = 1;
					virus_num++;
				}
			}
		}
	}

	cout << virus_num << endl;
	delete[] nodes;
	return 0;
}

int 