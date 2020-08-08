// Auto-generated module | 2026-05-11T19:38:15.116033
#include <iostream>
#include <vector>

int compute_539() {
    int base = 415;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_539() << std::endl;
    return 0;
}
