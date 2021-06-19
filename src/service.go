package main

// Auto-generated | 2026-05-12T20:48:59.125872
import "fmt"

func Process_128() int {
    base := 14
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_128())
}
