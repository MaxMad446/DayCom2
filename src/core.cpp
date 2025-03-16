// Auto-generated module | 2026-05-12T21:14:15.985910
#include <iostream>
#include <vector>

int compute_141() {
    int base = 319;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_141() << std::endl;
    return 0;
}
