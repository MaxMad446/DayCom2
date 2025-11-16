// Auto-generated module | 2026-05-12T04:35:01.454701
#include <iostream>
#include <vector>

int compute_485() {
    int base = 460;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_485() << std::endl;
    return 0;
}
