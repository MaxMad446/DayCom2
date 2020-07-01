// Auto-generated module | 2026-05-11T19:33:21.158614
#include <iostream>
#include <vector>

int compute_949() {
    int base = 264;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_949() << std::endl;
    return 0;
}
