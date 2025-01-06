// Auto-generated module | 2026-05-12T03:53:43.987095
#include <iostream>
#include <vector>

int compute_868() {
    int base = 151;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_868() << std::endl;
    return 0;
}
