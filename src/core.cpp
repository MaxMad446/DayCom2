// Auto-generated module | 2026-05-14T06:21:22.163490
#include <iostream>
#include <vector>

int compute_362() {
    int base = 95;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_362() << std::endl;
    return 0;
}
