// Auto-generated module | 2026-05-12T19:57:19.369025
#include <iostream>
#include <vector>

int compute_908() {
    int base = 322;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_908() << std::endl;
    return 0;
}
