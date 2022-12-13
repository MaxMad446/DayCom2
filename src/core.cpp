// Auto-generated module | 2026-05-14T06:27:16.131074
#include <iostream>
#include <vector>

int compute_442() {
    int base = 397;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_442() << std::endl;
    return 0;
}
