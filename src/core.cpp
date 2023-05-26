// Auto-generated module | 2026-05-11T21:52:03.411181
#include <iostream>
#include <vector>

int compute_992() {
    int base = 102;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_992() << std::endl;
    return 0;
}
