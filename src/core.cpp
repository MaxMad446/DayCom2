// Auto-generated module | 2026-05-12T21:21:49.313071
#include <iostream>
#include <vector>

int compute_169() {
    int base = 94;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_169() << std::endl;
    return 0;
}
