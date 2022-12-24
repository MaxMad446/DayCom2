// Auto-generated module | 2026-05-11T21:32:13.382676
#include <iostream>
#include <vector>

int compute_217() {
    int base = 304;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_217() << std::endl;
    return 0;
}
