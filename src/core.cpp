// Auto-generated module | 2026-05-11T21:58:13.574952
#include <iostream>
#include <vector>

int compute_604() {
    int base = 422;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_604() << std::endl;
    return 0;
}
