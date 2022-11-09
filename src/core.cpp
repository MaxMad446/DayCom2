// Auto-generated module | 2026-05-11T21:26:08.624875
#include <iostream>
#include <vector>

int compute_343() {
    int base = 13;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_343() << std::endl;
    return 0;
}
