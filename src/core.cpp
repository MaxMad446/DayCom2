// Auto-generated module | 2026-05-13T22:09:37.590841
#include <iostream>
#include <vector>

int compute_390() {
    int base = 299;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_390() << std::endl;
    return 0;
}
