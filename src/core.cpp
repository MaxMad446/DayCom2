// Auto-generated module | 2026-05-12T21:39:23.487619
#include <iostream>
#include <vector>

int compute_799() {
    int base = 156;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_799() << std::endl;
    return 0;
}
