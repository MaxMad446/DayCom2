package main

// Auto-generated | 2026-05-14T06:17:20.019025
import "fmt"

func Process_240() int {
    base := 246
    sum := 0
    for i := 0; i < 22; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_240())
}
