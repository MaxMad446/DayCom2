// Auto-generated module | 2026-05-13T21:01:51.970012
#include <iostream>
#include <vector>

int compute_465() {
    int base = 283;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_465() << std::endl;
    return 0;
}
