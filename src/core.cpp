// Auto-generated module | 2026-05-11T20:54:32.715980
#include <iostream>
#include <vector>

int compute_914() {
    int base = 84;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_914() << std::endl;
    return 0;
}
