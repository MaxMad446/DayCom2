package main

// Auto-generated | 2026-05-12T03:51:24.007308
import "fmt"

func Process_989() int {
    base := 352
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_989())
}
