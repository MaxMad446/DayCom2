package main

// Auto-generated | 2026-05-12T04:49:38.987143
import "fmt"

func Process_193() int {
    base := 206
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_193())
}
