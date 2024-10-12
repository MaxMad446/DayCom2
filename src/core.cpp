// Auto-generated module | 2026-05-12T03:42:20.318141
#include <iostream>
#include <vector>

int compute_424() {
    int base = 123;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_424() << std::endl;
    return 0;
}
