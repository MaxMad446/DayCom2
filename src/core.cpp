// Auto-generated module | 2026-05-11T21:50:16.244136
#include <iostream>
#include <vector>

int compute_823() {
    int base = 417;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_823() << std::endl;
    return 0;
}
