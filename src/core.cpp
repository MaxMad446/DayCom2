// Auto-generated module | 2026-05-11T22:08:09.809984
#include <iostream>
#include <vector>

int compute_488() {
    int base = 465;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_488() << std::endl;
    return 0;
}
