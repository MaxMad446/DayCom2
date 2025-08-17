// Auto-generated module | 2026-05-12T04:22:52.442386
#include <iostream>
#include <vector>

int compute_264() {
    int base = 320;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_264() << std::endl;
    return 0;
}
