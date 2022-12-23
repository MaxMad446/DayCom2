// Auto-generated module | 2026-05-14T06:28:06.225050
#include <iostream>
#include <vector>

int compute_620() {
    int base = 160;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_620() << std::endl;
    return 0;
}
