#include <iostream>

using namespace std;

template<typename T>
class myList{
public:
	class Node{
	public:
		Node* 	m_next;
		T		m_data;
		Node(Node* pos, T value):m_next(pos), m_data(value){}
	};
private:
	Node* m_head;
	Node* m_tail;
public:
	myList():m_head(NULL), m_tail(NULL){}
    void insert(T val){
		if (NULL == m_head){
			m_head = new Node(NULL, val);
			m_tail = m_head;
		}else{
			Node* tmp = m_head;
			m_head = new Node(tmp, val);
		}
	}
	void display(){
		Node *cur_pos = NULL;
		cur_pos = m_head;
	
		while (cur_pos != NULL ){
			cout << cur_pos->m_data << " ";
			cur_pos = cur_pos->m_next;
		}
	}

	// template<typename ostream>
	// friend ostream& operator<< (ostream&, myList<T>&);
};

//template<typename T, typename ostream>
//ostream& operator<< (ostream& stream, myList<T>& list_obj){
//	myList<T>::Node *cur_pos = NULL;
//	cur_pos = list_obj.m_head;
//	
//	while (cur_pos != NULL ){
//		stream << cur_pos.m_data << " ";
//		cur_pos = cur_pos->m_next;
//	}
//}
