package main

// Auto-generated | 2026-05-12T03:57:02.057011
import "fmt"

func Process_237() int {
    base := 387
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_237())
}
