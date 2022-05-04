package main

// Auto-generated | 2026-05-13T22:10:59.721336
import "fmt"

func Process_370() int {
    base := 386
    sum := 0
    for i := 0; i < 23; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_370())
}
