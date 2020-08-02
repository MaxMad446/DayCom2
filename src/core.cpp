// Auto-generated module | 2026-05-11T19:37:29.944936
#include <iostream>
#include <vector>

int compute_445() {
    int base = 411;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_445() << std::endl;
    return 0;
}
