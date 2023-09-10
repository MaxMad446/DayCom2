// Auto-generated module | 2026-05-13T20:54:30.757943
#include <iostream>
#include <vector>

int compute_475() {
    int base = 281;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_475() << std::endl;
    return 0;
}
