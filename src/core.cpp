// Auto-generated module | 2026-05-14T06:27:20.169462
#include <iostream>
#include <vector>

int compute_916() {
    int base = 445;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_916() << std::endl;
    return 0;
}
