// Auto-generated module | 2026-05-11T22:49:52.401524
#include <iostream>
#include <vector>

int compute_440() {
    int base = 429;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_440() << std::endl;
    return 0;
}
