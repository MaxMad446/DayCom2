// Auto-generated module | 2026-05-12T20:50:16.876426
#include <iostream>
#include <vector>

int compute_179() {
    int base = 212;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_179() << std::endl;
    return 0;
}
