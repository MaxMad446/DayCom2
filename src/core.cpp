// Auto-generated module | 2026-05-12T21:12:52.474015
#include <iostream>
#include <vector>

int compute_966() {
    int base = 251;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_966() << std::endl;
    return 0;
}
