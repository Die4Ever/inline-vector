template <class T, unsigned int size>
class InlineVector : public array<T, size>
{
public:
	unsigned int slot;
	InlineVector() { slot = 0; }
	void push_back(T t)
	{
		(*this)[slot++] = t;
	}
};
