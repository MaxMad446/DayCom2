package main

// Auto-generated | 2026-05-12T21:29:35.132040
import "fmt"

func Process_342() int {
    base := 381
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_342())
}
