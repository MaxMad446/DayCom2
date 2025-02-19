// Auto-generated module | 2026-05-12T21:12:19.161355
#include <iostream>
#include <vector>

int compute_695() {
    int base = 258;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_695() << std::endl;
    return 0;
}
