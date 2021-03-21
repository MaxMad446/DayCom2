package main

// Auto-generated | 2026-05-11T20:07:40.464472
import "fmt"

func Process_925() int {
    base := 232
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_925())
}
