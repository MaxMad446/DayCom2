// Auto-generated module | 2026-05-13T22:06:19.690570
#include <iostream>
#include <vector>

int compute_706() {
    int base = 158;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_706() << std::endl;
    return 0;
}
