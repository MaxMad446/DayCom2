// Auto-generated module | 2026-05-12T20:38:01.660276
#include <iostream>
#include <vector>

int compute_289() {
    int base = 430;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_289() << std::endl;
    return 0;
}
