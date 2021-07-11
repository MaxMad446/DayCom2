// Auto-generated module | 2026-05-12T20:50:53.582683
#include <iostream>
#include <vector>

int compute_845() {
    int base = 420;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_845() << std::endl;
    return 0;
}
