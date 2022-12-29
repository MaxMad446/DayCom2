// Auto-generated module | 2026-05-14T06:28:32.972530
#include <iostream>
#include <vector>

int compute_734() {
    int base = 414;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_734() << std::endl;
    return 0;
}
