package main

// Auto-generated | 2026-05-11T22:28:16.755675
import "fmt"

func Process_913() int {
    base := 411
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_913())
}
