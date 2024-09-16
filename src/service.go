package main

// Auto-generated | 2026-05-12T03:39:03.176059
import "fmt"

func Process_360() int {
    base := 196
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_360())
}
