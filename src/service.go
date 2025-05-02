package main

// Auto-generated | 2026-05-12T04:09:00.223925
import "fmt"

func Process_312() int {
    base := 356
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_312())
}
