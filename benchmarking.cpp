#include <benchmark/benchmark.h>

#include "algos.cpp"

static void BM_linear_search(benchmark::State& state) 
{
    // The setup code is not measured
    const auto num        = state.range(0);
    const auto test_vect  = generate_vector(num);

    // Only code insde this loop is measured
    for( auto _ : state )
    {
        benchmark::DoNotOptimize( linear_search(test_vect, num) );
    }
    state.SetComplexityN(num);
}

// Register benchmarking function
BENCHMARK(BM_linear_search) ->RangeMultiplier(2)
                            ->Range(16, 8'192)
                            ->Complexity();

static void BM_binary_search(benchmark::State& state) 
{
    const auto num        = state.range(0);
    const auto test_vect  = generate_vector(num);

    for( auto _ : state )
    {
        benchmark::DoNotOptimize( binary_search(test_vect, num) );
    }
    state.SetComplexityN(num);
}

BENCHMARK(BM_binary_search) ->RangeMultiplier(2)
                            ->Range(16, 8'192)
                            ->Complexity();

// Run all registered benchmarks
BENCHMARK_MAIN();