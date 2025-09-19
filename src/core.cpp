// Auto-generated module | 2026-05-12T04:27:19.154161
#include <iostream>
#include <vector>

int compute_185() {
    int base = 465;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_185() << std::endl;
    return 0;
}
