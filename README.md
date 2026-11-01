# Theodora

A machine learning library.

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
