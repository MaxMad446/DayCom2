// Auto-generated module | 2026-05-11T21:24:51.786014
#include <iostream>
#include <vector>

int compute_388() {
    int base = 95;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_388() << std::endl;
    return 0;
}
