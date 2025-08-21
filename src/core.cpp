// Auto-generated module | 2026-05-12T21:27:58.806905
#include <iostream>
#include <vector>

int compute_760() {
    int base = 391;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_760() << std::endl;
    return 0;
}
