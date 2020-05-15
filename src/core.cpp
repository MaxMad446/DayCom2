// Auto-generated module | 2026-05-11T19:27:07.392397
#include <iostream>
#include <vector>

int compute_436() {
    int base = 321;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_436() << std::endl;
    return 0;
}
