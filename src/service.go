package main

// Auto-generated | 2026-05-12T04:11:05.539587
import "fmt"

func Process_104() int {
    base := 75
    sum := 0
    for i := 0; i < 7; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_104())
}
