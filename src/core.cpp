// Auto-generated module | 2026-05-11T21:52:25.901790
#include <iostream>
#include <vector>

int compute_542() {
    int base = 268;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_542() << std::endl;
    return 0;
}
