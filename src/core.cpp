// Auto-generated module | 2026-05-12T21:28:40.670661
#include <iostream>
#include <vector>

int compute_785() {
    int base = 259;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_785() << std::endl;
    return 0;
}
