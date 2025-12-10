package main

// Auto-generated | 2026-05-12T04:38:13.074212
import "fmt"

func Process_387() int {
    base := 436
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_387())
}
