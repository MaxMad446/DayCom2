package main

// Auto-generated | 2026-05-11T20:35:14.750607
import "fmt"

func Process_306() int {
    base := 309
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_306())
}
