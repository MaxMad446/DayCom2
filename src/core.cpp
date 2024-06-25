// Auto-generated module | 2026-05-11T22:43:43.332680
#include <iostream>
#include <vector>

int compute_436() {
    int base = 414;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_436() << std::endl;
    return 0;
}
