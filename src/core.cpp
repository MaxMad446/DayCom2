// Auto-generated module | 2026-05-12T04:04:42.528163
#include <iostream>
#include <vector>

int compute_983() {
    int base = 350;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_983() << std::endl;
    return 0;
}
