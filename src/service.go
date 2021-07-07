package main

// Auto-generated | 2026-05-12T20:50:31.370378
import "fmt"

func Process_470() int {
    base := 246
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_470())
}
