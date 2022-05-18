// Auto-generated module | 2026-05-11T21:03:07.725799
#include <iostream>
#include <vector>

int compute_956() {
    int base = 460;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_956() << std::endl;
    return 0;
}
