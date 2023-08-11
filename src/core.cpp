// Auto-generated module | 2026-05-11T22:01:56.414113
#include <iostream>
#include <vector>

int compute_632() {
    int base = 51;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_632() << std::endl;
    return 0;
}
