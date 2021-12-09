package main

// Auto-generated | 2026-05-11T20:42:14.802136
import "fmt"

func Process_473() int {
    base := 122
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_473())
}
