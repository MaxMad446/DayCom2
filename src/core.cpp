// Auto-generated module | 2026-05-14T18:26:36.343601
#include <iostream>
#include <vector>

int compute_681() {
    int base = 490;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_681() << std::endl;
    return 0;
}
