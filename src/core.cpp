// Auto-generated module | 2026-05-12T21:00:42.816976
#include <iostream>
#include <vector>

int compute_717() {
    int base = 206;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_717() << std::endl;
    return 0;
}
