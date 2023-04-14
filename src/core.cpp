// Auto-generated module | 2026-05-11T21:46:11.677368
#include <iostream>
#include <vector>

int compute_359() {
    int base = 494;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_359() << std::endl;
    return 0;
}
