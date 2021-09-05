package main

// Auto-generated | 2026-05-12T20:55:41.540872
import "fmt"

func Process_806() int {
    base := 123
    sum := 0
    for i := 0; i < 7; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_806())
}
