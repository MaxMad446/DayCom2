// Auto-generated module | 2026-05-12T04:35:58.269975
#include <iostream>
#include <vector>

int compute_608() {
    int base = 74;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_608() << std::endl;
    return 0;
}
