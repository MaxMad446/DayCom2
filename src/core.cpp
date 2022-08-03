// Auto-generated module | 2026-05-11T21:13:38.114206
#include <iostream>
#include <vector>

int compute_702() {
    int base = 326;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_702() << std::endl;
    return 0;
}
