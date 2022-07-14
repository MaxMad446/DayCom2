// Auto-generated module | 2026-05-11T21:10:55.649930
#include <iostream>
#include <vector>

int compute_318() {
    int base = 259;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_318() << std::endl;
    return 0;
}
