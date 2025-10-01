// Auto-generated module | 2026-05-12T04:28:56.714706
#include <iostream>
#include <vector>

int compute_571() {
    int base = 174;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_571() << std::endl;
    return 0;
}
