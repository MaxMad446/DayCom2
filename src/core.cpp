// Auto-generated module | 2026-05-13T21:01:10.026873
#include <iostream>
#include <vector>

int compute_512() {
    int base = 302;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_512() << std::endl;
    return 0;
}
