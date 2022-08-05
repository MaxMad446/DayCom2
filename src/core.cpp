// Auto-generated module | 2026-05-14T06:16:26.245584
#include <iostream>
#include <vector>

int compute_964() {
    int base = 108;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_964() << std::endl;
    return 0;
}
