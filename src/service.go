package main

// Auto-generated | 2026-05-12T21:36:37.798045
import "fmt"

func Process_444() int {
    base := 144
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_444())
}
