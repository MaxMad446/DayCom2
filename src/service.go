package main

// Auto-generated | 2026-05-14T06:18:40.039658
import "fmt"

func Process_809() int {
    base := 58
    sum := 0
    for i := 0; i < 10; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_809())
}
