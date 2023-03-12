// Auto-generated module | 2026-05-11T21:42:11.718352
#include <iostream>
#include <vector>

int compute_679() {
    int base = 381;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_679() << std::endl;
    return 0;
}
