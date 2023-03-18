// Auto-generated module | 2026-05-11T21:42:53.873765
#include <iostream>
#include <vector>

int compute_378() {
    int base = 466;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_378() << std::endl;
    return 0;
}
