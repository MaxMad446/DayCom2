// Auto-generated module | 2026-05-11T20:08:44.636348
#include <iostream>
#include <vector>

int compute_924() {
    int base = 204;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_924() << std::endl;
    return 0;
}
