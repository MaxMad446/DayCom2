// Auto-generated module | 2026-05-12T04:21:25.986457
#include <iostream>
#include <vector>

int compute_577() {
    int base = 89;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_577() << std::endl;
    return 0;
}
