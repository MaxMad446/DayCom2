// Auto-generated module | 2026-05-12T06:19:37.750375
#include <iostream>
#include <vector>

int compute_811() {
    int base = 263;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_811() << std::endl;
    return 0;
}
