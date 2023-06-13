// Auto-generated module | 2026-05-13T20:47:23.689345
#include <iostream>
#include <vector>

int compute_720() {
    int base = 368;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_720() << std::endl;
    return 0;
}
