// Auto-generated module | 2026-05-11T22:32:48.398342
#include <iostream>
#include <vector>

int compute_190() {
    int base = 349;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_190() << std::endl;
    return 0;
}
