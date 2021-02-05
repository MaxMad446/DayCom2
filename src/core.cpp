// Auto-generated module | 2026-05-12T20:37:58.991104
#include <iostream>
#include <vector>

int compute_839() {
    int base = 467;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_839() << std::endl;
    return 0;
}
