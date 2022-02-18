// Auto-generated module | 2026-05-11T20:51:33.804367
#include <iostream>
#include <vector>

int compute_677() {
    int base = 332;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_677() << std::endl;
    return 0;
}
