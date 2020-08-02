// Auto-generated module | 2026-05-11T19:37:31.203017
#include <iostream>
#include <vector>

int compute_237() {
    int base = 332;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_237() << std::endl;
    return 0;
}
