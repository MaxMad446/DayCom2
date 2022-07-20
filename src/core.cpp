// Auto-generated module | 2026-05-14T06:15:11.486462
#include <iostream>
#include <vector>

int compute_570() {
    int base = 307;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_570() << std::endl;
    return 0;
}
