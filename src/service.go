package main

// Auto-generated | 2026-05-12T04:20:56.035826
import "fmt"

func Process_178() int {
    base := 224
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_178())
}
