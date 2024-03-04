// Auto-generated module | 2026-05-11T22:29:04.902571
#include <iostream>
#include <vector>

int compute_424() {
    int base = 425;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_424() << std::endl;
    return 0;
}
