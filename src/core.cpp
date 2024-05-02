// Auto-generated module | 2026-05-14T18:27:07.701972
#include <iostream>
#include <vector>

int compute_167() {
    int base = 234;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_167() << std::endl;
    return 0;
}
