// Auto-generated module | 2026-05-11T20:57:48.240926
#include <iostream>
#include <vector>

int compute_961() {
    int base = 380;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_961() << std::endl;
    return 0;
}
