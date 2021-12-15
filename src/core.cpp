// Auto-generated module | 2026-05-11T20:43:07.835557
#include <iostream>
#include <vector>

int compute_241() {
    int base = 305;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_241() << std::endl;
    return 0;
}
