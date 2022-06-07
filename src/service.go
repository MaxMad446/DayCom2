package main

// Auto-generated | 2026-05-11T21:05:54.037342
import "fmt"

func Process_658() int {
    base := 58
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_658())
}
