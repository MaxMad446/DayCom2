// Auto-generated module | 2026-05-12T03:50:05.791377
#include <iostream>
#include <vector>

int compute_364() {
    int base = 229;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_364() << std::endl;
    return 0;
}
