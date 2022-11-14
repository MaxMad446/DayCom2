// Auto-generated module | 2026-05-11T21:26:54.320014
#include <iostream>
#include <vector>

int compute_209() {
    int base = 436;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_209() << std::endl;
    return 0;
}
