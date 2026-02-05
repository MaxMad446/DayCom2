// Auto-generated module | 2026-05-12T04:46:12.174413
#include <iostream>
#include <vector>

int compute_725() {
    int base = 410;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_725() << std::endl;
    return 0;
}
