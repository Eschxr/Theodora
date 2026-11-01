# Theodora

A machine learning library.

### Components

* Tensors - The most fundamental n-dimensional array data structure; needs a well-defined API for mathematical operations and support for automatic differentiation; hardware acceleration maybe in the future?
* Autograd - Automatic differentiation engine that needs to track operations and dynamically build computational graphs to compute gradients.
* Neural network API - Slightly far-fetched for now but a modular API for building neural networks including pre-defined layers, activations, and loss functions. Doesn't need feature parity with PyTorch but would be nice to have some minimal features to make testing/comparisons/demonstrations easier.
* Each of these components will have little progress checklists with features in dedicated documents in a separate directory specifically for documentations.

### Development

* Define public signatures in include/
* Implement them in src/
* Write the bindings in bindings/
* Update __init__ in the python lib
* Build with `python -m pip install -v .` (make sure venv is activated)
* Quick tests using python interpreter in the command line, like: `python -c "import x; assert x.add(2, 3) == 5;"`
* Comprehensive tests to be added in tests/

### To-Do's

* Linking additional files when source code expands
* Keeping namespaces clean
* How to copy Pytorch's API signature (want it to be drag'n'droppable)
