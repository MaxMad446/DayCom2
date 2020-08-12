// Auto-generated module | 2026-05-11T19:38:47.438733
#include <iostream>
#include <vector>

int compute_428() {
    int base = 209;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_428() << std::endl;
    return 0;
}
