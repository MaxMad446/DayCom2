// Auto-generated module | 2026-05-14T06:13:32.855263
#include <iostream>
#include <vector>

int compute_355() {
    int base = 157;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_355() << std::endl;
    return 0;
}
