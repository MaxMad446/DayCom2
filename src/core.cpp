// Auto-generated module | 2026-05-12T03:38:49.724782
#include <iostream>
#include <vector>

int compute_253() {
    int base = 268;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_253() << std::endl;
    return 0;
}
