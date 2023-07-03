package main

// Auto-generated | 2026-05-11T21:57:01.548556
import "fmt"

func Process_730() int {
    base := 345
    sum := 0
    for i := 0; i < 7; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_730())
}
