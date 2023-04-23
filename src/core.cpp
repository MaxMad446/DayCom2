// Auto-generated module | 2026-05-13T20:36:22.001816
#include <iostream>
#include <vector>

int compute_167() {
    int base = 346;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_167() << std::endl;
    return 0;
}
