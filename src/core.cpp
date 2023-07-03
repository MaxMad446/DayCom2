// Auto-generated module | 2026-05-13T20:48:52.093262
#include <iostream>
#include <vector>

int compute_818() {
    int base = 320;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_818() << std::endl;
    return 0;
}
