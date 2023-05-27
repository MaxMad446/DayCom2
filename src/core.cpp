// Auto-generated module | 2026-05-11T21:52:10.729699
#include <iostream>
#include <vector>

int compute_465() {
    int base = 36;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_465() << std::endl;
    return 0;
}
