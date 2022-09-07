// Auto-generated module | 2026-05-14T06:19:08.684255
#include <iostream>
#include <vector>

int compute_311() {
    int base = 420;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_311() << std::endl;
    return 0;
}
