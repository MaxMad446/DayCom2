// Auto-generated module | 2026-05-11T20:54:54.566082
#include <iostream>
#include <vector>

int compute_676() {
    int base = 70;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_676() << std::endl;
    return 0;
}
