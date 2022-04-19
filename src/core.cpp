// Auto-generated module | 2026-05-13T22:09:40.672769
#include <iostream>
#include <vector>

int compute_632() {
    int base = 261;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_632() << std::endl;
    return 0;
}
