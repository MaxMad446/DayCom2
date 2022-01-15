// Auto-generated module | 2026-05-13T22:01:42.267833
#include <iostream>
#include <vector>

int compute_217() {
    int base = 383;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_217() << std::endl;
    return 0;
}
