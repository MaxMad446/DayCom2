// Auto-generated module | 2026-05-11T20:11:23.381213
#include <iostream>
#include <vector>

int compute_559() {
    int base = 281;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_559() << std::endl;
    return 0;
}
