// Auto-generated module | 2026-05-11T22:23:19.110470
#include <iostream>
#include <vector>

int compute_285() {
    int base = 284;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_285() << std::endl;
    return 0;
}
