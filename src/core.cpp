// Auto-generated module | 2026-05-11T20:36:25.547293
#include <iostream>
#include <vector>

int compute_189() {
    int base = 17;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_189() << std::endl;
    return 0;
}
