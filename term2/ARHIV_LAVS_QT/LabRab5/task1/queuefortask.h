#ifndef QUEUEFORTASK_H
#define QUEUEFORTASK_H
#include <myqueue.h>

template <typename T>
class QueueForTask: public MyQueue<T> {
public:
	void Sort(){
		if (this->empty()) {
			return;
		}
		bool flag;
		do {
			flag = false;
			auto temp = this->front_;
			while (temp->next != nullptr) {
				if (temp->value > temp->next->value) {
					flag = true;
					std::swap(temp->value, temp->next->value);
				}
				temp = temp->next;
			}
		} while (flag);
	}
};

#endif // QUEUEFORTASK_H
