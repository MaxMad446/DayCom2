// Auto-generated module | 2026-05-11T22:40:44.301159
#include <iostream>
#include <vector>

int compute_891() {
    int base = 336;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_891() << std::endl;
    return 0;
}
