// Auto-generated module | 2026-05-14T06:12:11.496408
#include <iostream>
#include <vector>

int compute_386() {
    int base = 335;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_386() << std::endl;
    return 0;
}
