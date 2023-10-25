// Auto-generated module | 2026-05-13T20:58:16.245305
#include <iostream>
#include <vector>

int compute_698() {
    int base = 74;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_698() << std::endl;
    return 0;
}
