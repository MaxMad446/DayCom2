// Auto-generated module | 2026-05-13T20:29:42.799401
#include <iostream>
#include <vector>

int compute_415() {
    int base = 443;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_415() << std::endl;
    return 0;
}
