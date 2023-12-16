// Auto-generated module | 2026-05-13T21:02:40.657766
#include <iostream>
#include <vector>

int compute_445() {
    int base = 471;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_445() << std::endl;
    return 0;
}
