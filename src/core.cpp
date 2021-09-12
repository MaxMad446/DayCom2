// Auto-generated module | 2026-05-12T20:56:19.637255
#include <iostream>
#include <vector>

int compute_581() {
    int base = 231;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_581() << std::endl;
    return 0;
}
