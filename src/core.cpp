// Auto-generated module | 2026-05-11T21:42:18.803522
#include <iostream>
#include <vector>

int compute_221() {
    int base = 172;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_221() << std::endl;
    return 0;
}
