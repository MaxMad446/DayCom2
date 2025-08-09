package main

// Auto-generated | 2026-05-12T21:26:51.789135
import "fmt"

func Process_942() int {
    base := 447
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_942())
}
