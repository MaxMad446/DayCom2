// Auto-generated module | 2026-05-14T18:21:05.288138
#include <iostream>
#include <vector>

int compute_776() {
    int base = 188;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_776() << std::endl;
    return 0;
}
