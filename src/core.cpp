// Auto-generated module | 2026-05-12T21:21:37.939993
#include <iostream>
#include <vector>

int compute_238() {
    int base = 326;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_238() << std::endl;
    return 0;
}
