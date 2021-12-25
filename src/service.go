package main

// Auto-generated | 2026-05-12T21:05:08.872101
import "fmt"

func Process_878() int {
    base := 50
    sum := 0
    for i := 0; i < 30; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_878())
}
