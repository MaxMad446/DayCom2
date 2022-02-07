package main

// Auto-generated | 2026-05-13T22:03:33.126864
import "fmt"

func Process_299() int {
    base := 18
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_299())
}
