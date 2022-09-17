// Auto-generated module | 2026-05-11T21:19:22.549934
#include <iostream>
#include <vector>

int compute_787() {
    int base = 422;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_787() << std::endl;
    return 0;
}
