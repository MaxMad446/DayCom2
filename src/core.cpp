// Auto-generated module | 2026-05-12T03:42:29.758085
#include <iostream>
#include <vector>

int compute_609() {
    int base = 157;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_609() << std::endl;
    return 0;
}
