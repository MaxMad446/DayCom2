// Auto-generated module | 2026-05-11T19:50:19.106962
#include <iostream>
#include <vector>

int compute_185() {
    int base = 439;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_185() << std::endl;
    return 0;
}
