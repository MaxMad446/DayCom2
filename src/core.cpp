// Auto-generated module | 2026-05-13T20:59:35.806733
#include <iostream>
#include <vector>

int compute_542() {
    int base = 217;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_542() << std::endl;
    return 0;
}
