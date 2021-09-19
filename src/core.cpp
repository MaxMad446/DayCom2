// Auto-generated module | 2026-05-12T20:56:58.522194
#include <iostream>
#include <vector>

int compute_270() {
    int base = 368;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_270() << std::endl;
    return 0;
}
