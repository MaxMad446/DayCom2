// Auto-generated module | 2026-05-14T06:28:03.788714
#include <iostream>
#include <vector>

int compute_712() {
    int base = 162;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_712() << std::endl;
    return 0;
}
