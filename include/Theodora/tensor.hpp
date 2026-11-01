#ifndef TENSOR_H_
#define TENSOR_H_

namespace theodora {

  class Tensor {

    public:
    explicit Tensor(int value);
    int value() const;

    private:
    int value_;

  };

}

#endif // TENSOR_H_
