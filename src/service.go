package main

// Auto-generated | 2026-05-12T21:35:57.051585
import "fmt"

func Process_746() int {
    base := 410
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_746())
}
