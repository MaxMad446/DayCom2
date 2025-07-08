// Auto-generated module | 2026-05-12T21:24:00.420403
#include <iostream>
#include <vector>

int compute_318() {
    int base = 46;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_318() << std::endl;
    return 0;
}
