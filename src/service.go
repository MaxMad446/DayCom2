package main

// Auto-generated | 2026-05-12T03:42:49.231968
import "fmt"

func Process_931() int {
    base := 401
    sum := 0
    for i := 0; i < 23; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_931())
}
