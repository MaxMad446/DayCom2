package main

// Auto-generated | 2026-05-11T21:36:17.190200
import "fmt"

func Process_550() int {
    base := 413
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_550())
}
