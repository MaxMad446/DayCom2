// Auto-generated module | 2026-05-12T04:40:42.627979
#include <iostream>
#include <vector>

int compute_275() {
    int base = 394;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_275() << std::endl;
    return 0;
}
