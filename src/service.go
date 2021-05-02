package main

// Auto-generated | 2026-05-11T20:12:59.378731
import "fmt"

func Process_701() int {
    base := 480
    sum := 0
    for i := 0; i < 7; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_701())
}
