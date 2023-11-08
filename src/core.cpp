// Auto-generated module | 2026-05-11T22:13:39.129994
#include <iostream>
#include <vector>

int compute_334() {
    int base = 118;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_334() << std::endl;
    return 0;
}
