package main

// Auto-generated | 2026-05-12T20:02:38.392386
import "fmt"

func Process_702() int {
    base := 55
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_702())
}
