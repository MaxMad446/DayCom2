package main

// Auto-generated | 2026-05-12T20:36:44.941023
import "fmt"

func Process_780() int {
    base := 263
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_780())
}
