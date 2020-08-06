// Auto-generated module | 2026-05-11T19:38:02.865367
#include <iostream>
#include <vector>

int compute_358() {
    int base = 396;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_358() << std::endl;
    return 0;
}
