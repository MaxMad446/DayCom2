// Auto-generated module | 2026-05-11T20:32:52.813628
#include <iostream>
#include <vector>

int compute_929() {
    int base = 330;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_929() << std::endl;
    return 0;
}
