# Useful links

1. https://habr.com/ru/companies/vk/articles/574414/ - Разбор алгоритмов генерации псевдослучайных чисел
2. https://www.boostcpp.org/doc/libs/develop/doc/html/boost_random/reference.html - Документация библиотеки boost
3. https://habr.com/ru/articles/263993/ - Генераторы непрерывно распределенных случайных величин

# To-Do list
- need to fix compiler warning due to non-virtual destructor (after that compiler option '-Werror' must be turned on)
- library structure
- first interface development
- investigate abilities for generators test (correctness & performance)

# Planned functionality

**Random number generators**
- minstd_rand0
- minstd_rand
- rand48
- ecuyer1988
- knuth_b
- kreutzer1986
- taus88
- hellekalek1995
- mt11213b
- mt19937
- mt19937_64
- __mixmax
- lagged_fibonacci607
- lagged_fibonacci1279
- lagged_fibonacci2281
- lagged_fibonacci3217
- lagged_fibonacci4423
- lagged_fibonacci9689
- lagged_fibonacci19937
- lagged_fibonacci23209
- lagged_fibonacci44497
- ranlux3
- ranlux4
- ranlux64_3
- ranlux64_4
- ranlux3_01
- ranlux4_01
- ranlux64_3_01
- ranlux64_4_01
- ranlux24
- ranlux48
- __splitmix64

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
