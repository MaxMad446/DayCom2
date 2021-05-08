package main

// Auto-generated | 2026-05-12T20:45:25.791452
import "fmt"

func Process_295() int {
    base := 372
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_295())
}
