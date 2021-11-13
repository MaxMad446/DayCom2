// Auto-generated module | 2026-05-12T21:01:27.120051
#include <iostream>
#include <vector>

int compute_646() {
    int base = 257;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_646() << std::endl;
    return 0;
}
