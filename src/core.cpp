// Auto-generated module | 2026-05-11T19:36:18.242677
#include <iostream>
#include <vector>

int compute_646() {
    int base = 453;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_646() << std::endl;
    return 0;
}
