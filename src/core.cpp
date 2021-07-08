// Auto-generated module | 2026-05-12T20:50:35.666463
#include <iostream>
#include <vector>

int compute_581() {
    int base = 199;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_581() << std::endl;
    return 0;
}
