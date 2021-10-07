// Auto-generated module | 2026-05-12T20:58:29.610140
#include <iostream>
#include <vector>

int compute_162() {
    int base = 126;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_162() << std::endl;
    return 0;
}
