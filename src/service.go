package main

// Auto-generated | 2026-05-12T21:38:06.886490
import "fmt"

func Process_547() int {
    base := 495
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_547())
}
