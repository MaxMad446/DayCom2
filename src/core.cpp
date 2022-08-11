// Auto-generated module | 2026-05-14T06:16:57.749342
#include <iostream>
#include <vector>

int compute_475() {
    int base = 255;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_475() << std::endl;
    return 0;
}
