// Auto-generated module | 2026-05-11T20:03:57.578835
#include <iostream>
#include <vector>

int compute_309() {
    int base = 233;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_309() << std::endl;
    return 0;
}
