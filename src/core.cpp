// Auto-generated module | 2026-05-11T21:29:11.983289
#include <iostream>
#include <vector>

int compute_428() {
    int base = 365;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_428() << std::endl;
    return 0;
}
