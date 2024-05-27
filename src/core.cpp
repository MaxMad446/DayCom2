// Auto-generated module | 2026-05-11T22:39:59.663174
#include <iostream>
#include <vector>

int compute_823() {
    int base = 153;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_823() << std::endl;
    return 0;
}
