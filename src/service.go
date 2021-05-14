package main

// Auto-generated | 2026-05-12T20:45:52.068628
import "fmt"

func Process_166() int {
    base := 347
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_166())
}
