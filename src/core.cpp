// Auto-generated module | 2026-05-14T06:12:40.959443
#include <iostream>
#include <vector>

int compute_122() {
    int base = 370;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_122() << std::endl;
    return 0;
}
