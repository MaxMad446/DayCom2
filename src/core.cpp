// Auto-generated module | 2026-05-11T20:46:31.705955
#include <iostream>
#include <vector>

int compute_632() {
    int base = 221;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_632() << std::endl;
    return 0;
}
