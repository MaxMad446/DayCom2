// Auto-generated module | 2026-05-13T22:09:21.101989
#include <iostream>
#include <vector>

int compute_705() {
    int base = 41;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_705() << std::endl;
    return 0;
}
