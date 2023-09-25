// Auto-generated module | 2026-05-13T20:55:51.571899
#include <iostream>
#include <vector>

int compute_934() {
    int base = 204;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_934() << std::endl;
    return 0;
}
