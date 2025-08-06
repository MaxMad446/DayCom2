package main

// Auto-generated | 2026-05-12T21:26:39.812522
import "fmt"

func Process_771() int {
    base := 109
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_771())
}
