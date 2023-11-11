package main

// Auto-generated | 2026-05-13T20:59:40.630969
import "fmt"

func Process_790() int {
    base := 39
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_790())
}
