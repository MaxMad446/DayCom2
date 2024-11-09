// Auto-generated module | 2026-05-12T03:45:56.527679
#include <iostream>
#include <vector>

int compute_674() {
    int base = 85;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_674() << std::endl;
    return 0;
}
