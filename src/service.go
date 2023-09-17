package main

// Auto-generated | 2026-05-13T20:55:04.540099
import "fmt"

func Process_715() int {
    base := 112
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_715())
}
