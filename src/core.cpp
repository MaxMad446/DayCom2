// Auto-generated module | 2026-05-12T03:45:52.405601
#include <iostream>
#include <vector>

int compute_553() {
    int base = 417;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_553() << std::endl;
    return 0;
}
