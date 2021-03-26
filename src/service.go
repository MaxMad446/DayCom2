package main

// Auto-generated | 2026-05-12T20:41:49.526310
import "fmt"

func Process_392() int {
    base := 347
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_392())
}
