// Auto-generated module | 2026-05-12T04:10:10.911744
#include <iostream>
#include <vector>

int compute_757() {
    int base = 264;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_757() << std::endl;
    return 0;
}
