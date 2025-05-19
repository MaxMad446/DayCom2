// Auto-generated module | 2026-05-12T21:19:42.913301
#include <iostream>
#include <vector>

int compute_695() {
    int base = 138;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_695() << std::endl;
    return 0;
}
