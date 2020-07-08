// Auto-generated module | 2026-05-11T19:34:10.246719
#include <iostream>
#include <vector>

int compute_966() {
    int base = 105;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_966() << std::endl;
    return 0;
}
