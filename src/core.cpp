// Auto-generated module | 2026-05-14T18:07:53.503662
#include <iostream>
#include <vector>

int compute_839() {
    int base = 282;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_839() << std::endl;
    return 0;
}
