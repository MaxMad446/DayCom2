// Auto-generated module | 2026-05-11T22:48:17.409061
#include <iostream>
#include <vector>

int compute_571() {
    int base = 256;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_571() << std::endl;
    return 0;
}
