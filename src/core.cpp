// Auto-generated module | 2026-05-11T22:44:44.281979
#include <iostream>
#include <vector>

int compute_493() {
    int base = 89;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_493() << std::endl;
    return 0;
}
