package main

// Auto-generated | 2026-05-12T04:40:29.589575
import "fmt"

func Process_960() int {
    base := 39
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_960())
}
