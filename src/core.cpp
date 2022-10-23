// Auto-generated module | 2026-05-11T21:23:52.870998
#include <iostream>
#include <vector>

int compute_466() {
    int base = 18;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_466() << std::endl;
    return 0;
}
