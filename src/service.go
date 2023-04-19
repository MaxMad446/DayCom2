package main

// Auto-generated | 2026-05-13T20:36:00.935886
import "fmt"

func Process_833() int {
    base := 207
    sum := 0
    for i := 0; i < 22; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_833())
}
