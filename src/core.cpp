// Auto-generated module | 2026-05-11T20:02:02.472530
#include <iostream>
#include <vector>

int compute_166() {
    int base = 187;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_166() << std::endl;
    return 0;
}
