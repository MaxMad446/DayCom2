// Auto-generated module | 2026-05-12T21:29:02.342938
#include <iostream>
#include <vector>

int compute_578() {
    int base = 312;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_578() << std::endl;
    return 0;
}
