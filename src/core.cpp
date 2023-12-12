// Auto-generated module | 2026-05-13T21:02:17.933293
#include <iostream>
#include <vector>

int compute_818() {
    int base = 449;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_818() << std::endl;
    return 0;
}
