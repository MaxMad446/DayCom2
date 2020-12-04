// Auto-generated module | 2026-05-14T18:08:42.203136
#include <iostream>
#include <vector>

int compute_532() {
    int base = 150;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_532() << std::endl;
    return 0;
}
