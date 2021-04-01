// Auto-generated module | 2026-05-11T20:09:07.191847
#include <iostream>
#include <vector>

int compute_707() {
    int base = 394;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_707() << std::endl;
    return 0;
}
