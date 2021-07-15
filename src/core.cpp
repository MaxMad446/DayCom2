// Auto-generated module | 2026-05-11T20:22:56.749091
#include <iostream>
#include <vector>

int compute_521() {
    int base = 404;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_521() << std::endl;
    return 0;
}
