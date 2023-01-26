// Auto-generated module | 2026-05-13T20:28:59.161604
#include <iostream>
#include <vector>

int compute_791() {
    int base = 373;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_791() << std::endl;
    return 0;
}
