// Auto-generated module | 2026-05-12T04:04:51.198128
#include <iostream>
#include <vector>

int compute_774() {
    int base = 465;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_774() << std::endl;
    return 0;
}
