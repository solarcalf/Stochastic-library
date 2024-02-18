# Useful links

1. https://habr.com/ru/companies/vk/articles/574414/ - Разбор алгоритмов генерации псевдослучайных чисел
2. https://www.boostcpp.org/doc/libs/develop/doc/html/boost_random/reference.html - Документация библиотеки boost
3. https://habr.com/ru/articles/263993/ - Генераторы непрерывно распределенных случайных величин
4. https://learn.microsoft.com/ru-ru/cpp/standard-library/linear-congruential-engine-class?view=msvc-170 - Справочник Microsoft по std::random
5. https://en.cppreference.com/w/cpp/header/random - cpp reference по std::random

# To-Do list
- need to fix compiler warning due to non-virtual destructor (after that compiler option '-Werror' must be turned on)
- library structure
- first interface development
- investigate abilities for generators test (correctness & performance)

# Planned functionality

**Random number generators**
1. LCG (std::linear_congruential_engine): minstd_rand0, minstd_rand, rand48
2. Mersenne twister (std::mersenne_twister_engine): - mt11213b, mt19937, mt19937_64
3. Lagged Fibonacci (std::subtract_with_carry_engine): - lagged_fibonacci, ranlux

**RNG adapters**
1. discard_block_engine
2. independent_bits_engine
3. shuffle_order_engine

**Discrete random values distributions**
- Bernoulli Distributions
- Binomial Distribution
- Geometric Distribution
- Negative Binomial Distribution
- Poisson Distribution
- Hypergeometric distribution
- Multinomial distribution

**Continious random value Distributions**
- Uniform distribution
- Normal distribution
- Exponential distribution
- Chi-squared distribution
- Student's t-distribution
- F-distribution
- Logistic distribution
- Log-logistic distribution
- Weibull distribution
- Log-Normal distribution
- Rayleigh distribution
- Exponential power distribution
- Gamma distribution
- Beta distribution
- Chi distribution
- Gumbel distribution
- Pareto distribution
- Pareto Type II distribution
- Cauchy distribution
