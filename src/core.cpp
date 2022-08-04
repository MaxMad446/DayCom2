// Auto-generated module | 2026-05-11T21:13:42.986053
#include <iostream>
#include <vector>

int compute_198() {
    int base = 210;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_198() << std::endl;
    return 0;
}
