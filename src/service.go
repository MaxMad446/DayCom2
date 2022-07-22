package main

// Auto-generated | 2026-05-14T06:15:22.494666
import "fmt"

func Process_410() int {
    base := 438
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_410())
}
