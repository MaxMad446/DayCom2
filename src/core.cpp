// Auto-generated module | 2026-05-12T21:09:43.408166
#include <iostream>
#include <vector>

int compute_627() {
    int base = 76;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_627() << std::endl;
    return 0;
}
