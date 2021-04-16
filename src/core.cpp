// Auto-generated module | 2026-05-11T20:11:01.284279
#include <iostream>
#include <vector>

int compute_554() {
    int base = 169;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_554() << std::endl;
    return 0;
}
