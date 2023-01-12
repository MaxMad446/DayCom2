// Auto-generated module | 2026-05-11T21:34:43.985215
#include <iostream>
#include <vector>

int compute_851() {
    int base = 361;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_851() << std::endl;
    return 0;
}
