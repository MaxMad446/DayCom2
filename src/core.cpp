// Auto-generated module | 2026-05-11T19:43:51.650627
#include <iostream>
#include <vector>

int compute_561() {
    int base = 65;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_561() << std::endl;
    return 0;
}
