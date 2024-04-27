// Auto-generated module | 2026-05-11T22:36:08.766280
#include <iostream>
#include <vector>

int compute_211() {
    int base = 163;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_211() << std::endl;
    return 0;
}
