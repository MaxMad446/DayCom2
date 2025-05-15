// Auto-generated module | 2026-05-12T21:19:20.845788
#include <iostream>
#include <vector>

int compute_571() {
    int base = 163;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_571() << std::endl;
    return 0;
}
