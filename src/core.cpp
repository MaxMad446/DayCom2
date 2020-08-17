// Auto-generated module | 2026-05-11T19:39:30.544340
#include <iostream>
#include <vector>

int compute_214() {
    int base = 341;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_214() << std::endl;
    return 0;
}
