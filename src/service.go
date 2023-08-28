package main

// Auto-generated | 2026-05-13T20:53:23.928587
import "fmt"

func Process_733() int {
    base := 400
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_733())
}
