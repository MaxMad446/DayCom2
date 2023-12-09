// Auto-generated module | 2026-05-13T21:02:02.507716
#include <iostream>
#include <vector>

int compute_350() {
    int base = 76;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_350() << std::endl;
    return 0;
}
