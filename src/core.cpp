// Auto-generated module | 2026-05-11T21:17:50.630907
#include <iostream>
#include <vector>

int compute_981() {
    int base = 105;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_981() << std::endl;
    return 0;
}
