// Auto-generated module | 2026-05-13T22:01:04.913878
#include <iostream>
#include <vector>

int compute_471() {
    int base = 422;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_471() << std::endl;
    return 0;
}
