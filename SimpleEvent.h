#include <vector>

class SimpleEvent {

private:
	std::vector<void*>functions;

public:
	void AddListener(void* Func) { functions.push_back(Func); }
	void Invoke() {
		for (int i = 0; i < functions.size(); i++)
		{
			((void (*)(void)) functions[i])();
		}
	}
	void RemoveListener(void* Func) {
		for (int i = 0; i < functions.size(); i++)
		{
			if (Func == functions[i]) {
				functions.erase(functions.begin() + i);
			}
		}
	}
	void RemoveAllListeners() { functions.clear(); }

};