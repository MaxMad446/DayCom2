// Auto-generated module | 2026-05-13T22:03:34.832819
#include <iostream>
#include <vector>

int compute_561() {
    int base = 270;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_561() << std::endl;
    return 0;
}
