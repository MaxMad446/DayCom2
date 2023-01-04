// Auto-generated module | 2026-05-11T21:33:45.750363
#include <iostream>
#include <vector>

int compute_628() {
    int base = 51;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_628() << std::endl;
    return 0;
}
