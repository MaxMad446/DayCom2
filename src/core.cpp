// Auto-generated module | 2026-05-12T04:35:14.896656
#include <iostream>
#include <vector>

int compute_270() {
    int base = 454;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_270() << std::endl;
    return 0;
}
