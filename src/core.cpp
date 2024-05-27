// Auto-generated module | 2026-05-14T18:28:54.408044
#include <iostream>
#include <vector>

int compute_966() {
    int base = 364;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_966() << std::endl;
    return 0;
}
