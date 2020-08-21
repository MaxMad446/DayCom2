// Auto-generated module | 2026-05-11T19:40:03.196650
#include <iostream>
#include <vector>

int compute_436() {
    int base = 169;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_436() << std::endl;
    return 0;
}
