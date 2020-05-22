// Auto-generated module | 2026-05-11T19:27:59.291500
#include <iostream>
#include <vector>

int compute_628() {
    int base = 201;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_628() << std::endl;
    return 0;
}
