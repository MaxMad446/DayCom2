// Auto-generated module | 2026-05-12T04:15:55.197638
#include <iostream>
#include <vector>

int compute_233() {
    int base = 241;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_233() << std::endl;
    return 0;
}
