// Auto-generated module | 2026-05-11T22:30:05.274166
#include <iostream>
#include <vector>

int compute_980() {
    int base = 411;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_980() << std::endl;
    return 0;
}
