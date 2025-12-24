package main

// Auto-generated | 2026-05-12T04:40:25.282975
import "fmt"

func Process_297() int {
    base := 75
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_297())
}
