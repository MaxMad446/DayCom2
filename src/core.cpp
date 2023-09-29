// Auto-generated module | 2026-05-13T20:56:10.218406
#include <iostream>
#include <vector>

int compute_653() {
    int base = 270;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_653() << std::endl;
    return 0;
}
