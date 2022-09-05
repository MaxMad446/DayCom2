// Auto-generated module | 2026-05-11T21:17:49.775789
#include <iostream>
#include <vector>

int compute_924() {
    int base = 265;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_924() << std::endl;
    return 0;
}
