// Auto-generated module | 2026-05-12T03:53:29.308245
#include <iostream>
#include <vector>

int compute_369() {
    int base = 77;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_369() << std::endl;
    return 0;
}
