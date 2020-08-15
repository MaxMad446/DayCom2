// Auto-generated module | 2026-05-11T19:39:08.263430
#include <iostream>
#include <vector>

int compute_882() {
    int base = 40;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_882() << std::endl;
    return 0;
}
