// Auto-generated module | 2026-05-13T20:57:45.477299
#include <iostream>
#include <vector>

int compute_349() {
    int base = 177;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_349() << std::endl;
    return 0;
}
