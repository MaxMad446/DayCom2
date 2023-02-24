// Auto-generated module | 2026-05-11T21:40:01.561717
#include <iostream>
#include <vector>

int compute_724() {
    int base = 303;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_724() << std::endl;
    return 0;
}
