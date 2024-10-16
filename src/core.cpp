// Auto-generated module | 2026-05-12T03:42:51.044824
#include <iostream>
#include <vector>

int compute_294() {
    int base = 287;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_294() << std::endl;
    return 0;
}
