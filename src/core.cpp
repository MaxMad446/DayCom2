// Auto-generated module | 2026-05-13T22:07:01.719252
#include <iostream>
#include <vector>

int compute_517() {
    int base = 482;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_517() << std::endl;
    return 0;
}
