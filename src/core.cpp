// Auto-generated module | 2026-05-12T21:00:03.279234
#include <iostream>
#include <vector>

int compute_475() {
    int base = 149;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_475() << std::endl;
    return 0;
}
