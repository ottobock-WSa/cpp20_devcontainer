#include <memory>


template<typename T>
class Stack {
    private:
        std::unique_ptr<T[]> _pData;
        int _tos;
        int _size;
    public:
        Stack(int size): _size(size), _tos(0), _pData(std::make_unique<T[]>(size)){};
        bool push(T v)
        {
            if (isFull()) {
                return false;
            }
            _pData[_tos++] = v;
            return true;
        }
        T pop(){
            if (isEmpty()){
                return T();//123;//
            }
            return _pData[--_tos];
        }

        bool isEmpty(){
            return _tos == 0;
        }
        bool isFull(){
            return _tos == _size;
        }
};