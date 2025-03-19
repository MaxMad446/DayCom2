// Auto-generated module | 2026-05-12T04:03:07.352776
#include <iostream>
#include <vector>

int compute_367() {
    int base = 212;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_367() << std::endl;
    return 0;
}
