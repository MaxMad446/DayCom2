// Auto-generated module | 2026-05-14T06:20:13.433753
#include <iostream>
#include <vector>

int compute_244() {
    int base = 33;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_244() << std::endl;
    return 0;
}
