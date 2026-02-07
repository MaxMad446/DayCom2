// Auto-generated module | 2026-05-12T04:46:26.195351
#include <iostream>
#include <vector>

int compute_707() {
    int base = 87;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_707() << std::endl;
    return 0;
}
