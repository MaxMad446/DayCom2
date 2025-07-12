package main

// Auto-generated | 2026-05-12T04:18:04.354046
import "fmt"

func Process_730() int {
    base := 340
    sum := 0
    for i := 0; i < 22; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_730())
}
