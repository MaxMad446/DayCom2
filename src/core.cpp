// Auto-generated module | 2026-05-11T19:53:17.120743
#include <iostream>
#include <vector>

int compute_571() {
    int base = 41;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_571() << std::endl;
    return 0;
}
