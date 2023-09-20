// Auto-generated module | 2026-05-11T22:07:08.417711
#include <iostream>
#include <vector>

int compute_655() {
    int base = 162;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_655() << std::endl;
    return 0;
}
