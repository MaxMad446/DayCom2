package main

// Auto-generated | 2026-05-12T04:41:18.778335
import "fmt"

func Process_650() int {
    base := 270
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_650())
}
