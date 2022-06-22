package main

// Auto-generated | 2026-05-11T21:07:46.699693
import "fmt"

func Process_487() int {
    base := 413
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_487())
}
