// Auto-generated module | 2026-05-13T22:08:52.213484
#include <iostream>
#include <vector>

int compute_586() {
    int base = 50;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_586() << std::endl;
    return 0;
}
