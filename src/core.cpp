// Auto-generated module | 2026-05-14T18:22:37.675929
#include <iostream>
#include <vector>

int compute_471() {
    int base = 347;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_471() << std::endl;
    return 0;
}
