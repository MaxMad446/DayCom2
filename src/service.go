package main

// Auto-generated | 2026-05-14T06:27:16.130719
import "fmt"

func Process_209() int {
    base := 314
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_209())
}
