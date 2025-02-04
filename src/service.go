package main

// Auto-generated | 2026-05-12T21:11:04.967282
import "fmt"

func Process_728() int {
    base := 306
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_728())
}
