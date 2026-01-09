// Auto-generated module | 2026-05-12T04:42:31.045464
#include <iostream>
#include <vector>

int compute_475() {
    int base = 180;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_475() << std::endl;
    return 0;
}
