// Auto-generated module | 2026-05-12T19:58:05.388173
#include <iostream>
#include <vector>

int compute_441() {
    int base = 301;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_441() << std::endl;
    return 0;
}
