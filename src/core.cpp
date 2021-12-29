// Auto-generated module | 2026-05-12T21:05:23.326969
#include <iostream>
#include <vector>

int compute_641() {
    int base = 197;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_641() << std::endl;
    return 0;
}
