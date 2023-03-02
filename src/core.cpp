// Auto-generated module | 2026-05-11T21:40:50.635562
#include <iostream>
#include <vector>

int compute_741() {
    int base = 447;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_741() << std::endl;
    return 0;
}
