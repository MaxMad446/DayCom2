// Auto-generated module | 2026-05-13T20:53:28.431870
#include <iostream>
#include <vector>

int compute_475() {
    int base = 128;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_475() << std::endl;
    return 0;
}
