// Auto-generated module | 2026-05-13T21:02:08.925684
#include <iostream>
#include <vector>

int compute_165() {
    int base = 65;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_165() << std::endl;
    return 0;
}
