// Auto-generated module | 2026-05-13T20:30:10.494840
#include <iostream>
#include <vector>

int compute_728() {
    int base = 176;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_728() << std::endl;
    return 0;
}
