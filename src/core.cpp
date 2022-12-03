// Auto-generated module | 2026-05-11T21:29:26.651550
#include <iostream>
#include <vector>

int compute_302() {
    int base = 304;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_302() << std::endl;
    return 0;
}
