// Auto-generated module | 2026-05-11T21:48:02.170655
#include <iostream>
#include <vector>

int compute_512() {
    int base = 343;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_512() << std::endl;
    return 0;
}
