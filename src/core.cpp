// Auto-generated module | 2026-05-11T21:53:18.478395
#include <iostream>
#include <vector>

int compute_293() {
    int base = 161;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_293() << std::endl;
    return 0;
}
