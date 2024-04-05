// Auto-generated module | 2026-05-11T22:33:13.705685
#include <iostream>
#include <vector>

int compute_539() {
    int base = 371;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_539() << std::endl;
    return 0;
}
