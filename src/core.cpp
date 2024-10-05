// Auto-generated module | 2026-05-12T03:41:28.252985
#include <iostream>
#include <vector>

int compute_510() {
    int base = 111;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_510() << std::endl;
    return 0;
}
