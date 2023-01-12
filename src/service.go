package main

// Auto-generated | 2026-05-13T20:27:45.626099
import "fmt"

func Process_370() int {
    base := 30
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_370())
}
