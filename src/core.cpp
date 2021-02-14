// Auto-generated module | 2026-05-11T20:03:19.689596
#include <iostream>
#include <vector>

int compute_215() {
    int base = 159;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_215() << std::endl;
    return 0;
}
