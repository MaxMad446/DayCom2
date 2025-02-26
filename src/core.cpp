// Auto-generated module | 2026-05-12T04:00:25.932175
#include <iostream>
#include <vector>

int compute_467() {
    int base = 399;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_467() << std::endl;
    return 0;
}
