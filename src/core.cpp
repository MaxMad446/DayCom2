// Auto-generated module | 2026-05-12T20:54:57.451120
#include <iostream>
#include <vector>

int compute_767() {
    int base = 181;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_767() << std::endl;
    return 0;
}
