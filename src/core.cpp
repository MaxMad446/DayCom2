// Auto-generated module | 2026-05-13T20:32:52.604625
#include <iostream>
#include <vector>

int compute_320() {
    int base = 305;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_320() << std::endl;
    return 0;
}
