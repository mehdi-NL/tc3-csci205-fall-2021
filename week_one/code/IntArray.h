#ifndef INT_ARRAY_H
#define INT_ARRAY_H

class IntArray{
	private:
		int *m_array;
		int m_length;

	public:
		IntArray(int length);
		~IntArray();
		void setValue(int index, int value);
		int getValue(int index);
		int getLength();
};
#endif
