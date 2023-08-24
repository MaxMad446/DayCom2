// Auto-generated module | 2026-05-13T20:53:07.194399
#include <iostream>
#include <vector>

int compute_193() {
    int base = 282;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_193() << std::endl;
    return 0;
}
