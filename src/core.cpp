// Auto-generated module | 2026-05-14T18:12:09.713848
#include <iostream>
#include <vector>

int compute_225() {
    int base = 341;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_225() << std::endl;
    return 0;
}
