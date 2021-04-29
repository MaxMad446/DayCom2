package main

// Auto-generated | 2026-05-12T20:44:37.754289
import "fmt"

func Process_615() int {
    base := 261
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_615())
}
