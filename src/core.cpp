// Auto-generated module | 2026-05-11T19:47:39.947383
#include <iostream>
#include <vector>

int compute_768() {
    int base = 325;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_768() << std::endl;
    return 0;
}
