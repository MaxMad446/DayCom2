// Auto-generated module | 2026-05-12T21:25:15.767750
#include <iostream>
#include <vector>

int compute_103() {
    int base = 43;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_103() << std::endl;
    return 0;
}
