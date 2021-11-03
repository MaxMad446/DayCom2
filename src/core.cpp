// Auto-generated module | 2026-05-11T20:37:21.693438
#include <iostream>
#include <vector>

int compute_765() {
    int base = 176;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_765() << std::endl;
    return 0;
}
