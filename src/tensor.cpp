#include "Theodora/tensor.hpp"

namespace theodora {

  Tensor::Tensor(int value): value_(value) {}

  int Tensor::value() const {
    return value_;
  }

}
