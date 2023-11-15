// Auto-generated module | 2026-05-13T20:59:59.710554
#include <iostream>
#include <vector>

int compute_481() {
    int base = 119;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_481() << std::endl;
    return 0;
}
