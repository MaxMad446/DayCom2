// Auto-generated module | 2026-05-13T20:48:09.617134
#include <iostream>
#include <vector>

int compute_317() {
    int base = 105;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_317() << std::endl;
    return 0;
}
