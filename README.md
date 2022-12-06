# Microbenchmarking with Google Benchmark

For a detailed explanation on benchnmarking with google benchmark [see my blog post](https://techventure.tech/how-to-solve-the-make-the-string-great/). 

## Building

### Preliminary 

To start, the repository has to be cloned:

```bash
$ git clone https://github.com/RobertCrupa/microbenchmarking.git
$ cd microbenchmarking
```

### Building and running the test cases

To create build folder and run tests:

```bash
$ cmake -S . -B build
$ cmake --build build
$ cd build && ./benchmark
```
