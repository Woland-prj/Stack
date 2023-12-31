#pragma once
using DataType = int;

class Stack {
private:
	typedef struct St {
		DataType Data;
		St* Next;
	};
	St* Top, * El;
public:
	Stack() {
		Top = nullptr;
		El = nullptr;
	}

	void Push(DataType D) {
		El = new St;
		El->Next = Top;
		El->Data = D;
		Top = El;
	}

	bool isEmpty() {
		return Top == nullptr;
	}

	DataType Pop() {
		DataType D;
		if (Top != nullptr) {
			D = Top->Data;
			El = Top;
			Top = El->Next;
			delete El;
			return D;
		}
	}

	~Stack() {
		while (!this->isEmpty()) {
			El = Top;
			Top = El->Next;
			delete El;
		}
	}
};