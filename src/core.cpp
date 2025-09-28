// Auto-generated module | 2026-05-12T04:28:36.135114
#include <iostream>
#include <vector>

int compute_147() {
    int base = 283;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_147() << std::endl;
    return 0;
}
