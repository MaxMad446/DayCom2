// Auto-generated module | 2026-05-11T20:02:24.195852
#include <iostream>
#include <vector>

int compute_712() {
    int base = 278;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_712() << std::endl;
    return 0;
}
