package main

// Auto-generated | 2026-05-12T06:22:37.291176
import "fmt"

func Process_354() int {
    base := 91
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_354())
}
