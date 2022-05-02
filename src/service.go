package main

// Auto-generated | 2026-05-11T21:00:58.762381
import "fmt"

func Process_473() int {
    base := 445
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_473())
}
