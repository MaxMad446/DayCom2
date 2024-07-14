// Auto-generated module | 2026-05-11T22:46:15.166239
#include <iostream>
#include <vector>

int compute_225() {
    int base = 32;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_225() << std::endl;
    return 0;
}
