// Auto-generated module | 2026-05-11T19:34:26.780729
#include <iostream>
#include <vector>

int compute_192() {
    int base = 181;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_192() << std::endl;
    return 0;
}
