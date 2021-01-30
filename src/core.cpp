// Auto-generated module | 2026-05-12T20:37:24.369468
#include <iostream>
#include <vector>

int compute_231() {
    int base = 437;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_231() << std::endl;
    return 0;
}
