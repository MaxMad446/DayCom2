// Auto-generated module | 2026-05-13T20:51:57.229514
#include <iostream>
#include <vector>

int compute_770() {
    int base = 231;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_770() << std::endl;
    return 0;
}
