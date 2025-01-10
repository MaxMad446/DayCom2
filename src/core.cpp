// Auto-generated module | 2026-05-12T03:54:15.321117
#include <iostream>
#include <vector>

int compute_896() {
    int base = 37;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_896() << std::endl;
    return 0;
}
