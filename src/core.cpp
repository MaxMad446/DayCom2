// Auto-generated module | 2026-05-11T21:25:30.407554
#include <iostream>
#include <vector>

int compute_681() {
    int base = 127;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_681() << std::endl;
    return 0;
}
