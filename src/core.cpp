// Auto-generated module | 2026-05-12T03:43:46.265031
#include <iostream>
#include <vector>

int compute_614() {
    int base = 164;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_614() << std::endl;
    return 0;
}
