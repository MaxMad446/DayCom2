// Auto-generated module | 2026-05-11T20:20:42.784724
#include <iostream>
#include <vector>

int compute_190() {
    int base = 34;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_190() << std::endl;
    return 0;
}
