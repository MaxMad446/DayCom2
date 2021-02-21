// Auto-generated module | 2026-05-12T21:34:54.683133
#include <iostream>
#include <vector>

int compute_651() {
    int base = 63;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_651() << std::endl;
    return 0;
}
