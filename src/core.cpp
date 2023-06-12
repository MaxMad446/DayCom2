// Auto-generated module | 2026-05-11T21:54:08.097991
#include <iostream>
#include <vector>

int compute_359() {
    int base = 251;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_359() << std::endl;
    return 0;
}
