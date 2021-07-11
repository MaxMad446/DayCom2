// Auto-generated module | 2026-05-12T20:50:50.523892
#include <iostream>
#include <vector>

int compute_278() {
    int base = 121;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_278() << std::endl;
    return 0;
}
