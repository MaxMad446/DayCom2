// Auto-generated module | 2026-05-11T22:24:44.111921
#include <iostream>
#include <vector>

int compute_951() {
    int base = 376;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_951() << std::endl;
    return 0;
}
