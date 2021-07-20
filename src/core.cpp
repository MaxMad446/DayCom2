// Auto-generated module | 2026-05-12T20:51:26.642210
#include <iostream>
#include <vector>

int compute_124() {
    int base = 42;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_124() << std::endl;
    return 0;
}
