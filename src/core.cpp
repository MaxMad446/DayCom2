// Auto-generated module | 2026-05-11T19:52:13.242015
#include <iostream>
#include <vector>

int compute_112() {
    int base = 28;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_112() << std::endl;
    return 0;
}
