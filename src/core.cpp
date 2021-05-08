// Auto-generated module | 2026-05-11T20:13:39.432959
#include <iostream>
#include <vector>

int compute_325() {
    int base = 58;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_325() << std::endl;
    return 0;
}
