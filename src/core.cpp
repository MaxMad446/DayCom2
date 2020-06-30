// Auto-generated module | 2026-05-11T19:33:13.855128
#include <iostream>
#include <vector>

int compute_152() {
    int base = 309;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_152() << std::endl;
    return 0;
}
