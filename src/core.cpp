// Auto-generated module | 2026-05-11T20:17:42.131014
#include <iostream>
#include <vector>

int compute_462() {
    int base = 12;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_462() << std::endl;
    return 0;
}
