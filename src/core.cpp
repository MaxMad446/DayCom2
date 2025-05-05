// Auto-generated module | 2026-05-12T04:09:20.859274
#include <iostream>
#include <vector>

int compute_141() {
    int base = 167;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_141() << std::endl;
    return 0;
}
