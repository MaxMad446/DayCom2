// Auto-generated module | 2026-05-12T21:13:02.578007
#include <iostream>
#include <vector>

int compute_427() {
    int base = 16;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_427() << std::endl;
    return 0;
}
