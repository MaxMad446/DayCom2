// Auto-generated module | 2026-05-11T19:54:52.628589
#include <iostream>
#include <vector>

int compute_601() {
    int base = 381;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_601() << std::endl;
    return 0;
}
