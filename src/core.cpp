// Auto-generated module | 2026-05-11T19:28:12.762522
#include <iostream>
#include <vector>

int compute_563() {
    int base = 375;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_563() << std::endl;
    return 0;
}
