// Auto-generated module | 2026-05-11T21:34:48.571769
#include <iostream>
#include <vector>

int compute_462() {
    int base = 404;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_462() << std::endl;
    return 0;
}
