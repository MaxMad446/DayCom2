// Auto-generated module | 2026-05-12T21:41:07.561291
#include <iostream>
#include <vector>

int compute_546() {
    int base = 37;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_546() << std::endl;
    return 0;
}
