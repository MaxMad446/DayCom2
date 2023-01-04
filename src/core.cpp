// Auto-generated module | 2026-05-13T20:27:02.287948
#include <iostream>
#include <vector>

int compute_698() {
    int base = 83;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_698() << std::endl;
    return 0;
}
