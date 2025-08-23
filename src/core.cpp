// Auto-generated module | 2026-05-12T04:23:42.162537
#include <iostream>
#include <vector>

int compute_623() {
    int base = 395;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_623() << std::endl;
    return 0;
}
