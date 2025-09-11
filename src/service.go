package main

// Auto-generated | 2026-05-12T04:26:19.299266
import "fmt"

func Process_307() int {
    base := 62
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_307())
}
