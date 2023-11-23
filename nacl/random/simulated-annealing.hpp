double get_rand_double() {
  return double(
         uniform_int_distribution<int>(0, INF)(rng)) /
         INF;
}

int main() {
  const int iterations = 10000000;
  double mpl = pow((1e-5) / temp, (double)1 / iterations);
  for (int i = 0; i < iterations; ++i) {
    t *= mpl;
    if (new_score >= score ||
        get_rand_double() <
        exp((new_score - score) / temp)) {
      score = new_score;
      return;
    }
  }
}