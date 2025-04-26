// Auto-generated module | 2026-05-12T21:17:44.481856
#include <iostream>
#include <vector>

int compute_455() {
    int base = 414;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_455() << std::endl;
    return 0;
}
