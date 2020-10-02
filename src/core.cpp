// Auto-generated module | 2026-05-11T19:45:39.065188
#include <iostream>
#include <vector>

int compute_646() {
    int base = 322;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_646() << std::endl;
    return 0;
}
