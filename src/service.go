package main

// Auto-generated | 2026-05-12T21:03:08.269004
import "fmt"

func Process_271() int {
    base := 286
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_271())
}
