// Auto-generated module | 2026-05-11T22:21:17.557451
#include <iostream>
#include <vector>

int compute_247() {
    int base = 144;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_247() << std::endl;
    return 0;
}
