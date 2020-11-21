// Auto-generated module | 2026-05-12T20:00:01.728759
#include <iostream>
#include <vector>

int compute_698() {
    int base = 156;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_698() << std::endl;
    return 0;
}
