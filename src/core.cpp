// Auto-generated module | 2026-05-11T19:31:01.781805
#include <iostream>
#include <vector>

int compute_548() {
    int base = 429;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_548() << std::endl;
    return 0;
}
