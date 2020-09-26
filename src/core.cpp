// Auto-generated module | 2026-05-11T19:44:44.825860
#include <iostream>
#include <vector>

int compute_897() {
    int base = 315;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_897() << std::endl;
    return 0;
}
