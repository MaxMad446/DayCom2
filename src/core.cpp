// Auto-generated module | 2026-05-12T20:58:05.332263
#include <iostream>
#include <vector>

int compute_571() {
    int base = 90;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_571() << std::endl;
    return 0;
}
