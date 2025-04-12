// Auto-generated module | 2026-05-12T04:06:12.828996
#include <iostream>
#include <vector>

int compute_571() {
    int base = 200;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_571() << std::endl;
    return 0;
}
