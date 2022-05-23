package main

// Auto-generated | 2026-05-11T21:03:51.768755
import "fmt"

func Process_986() int {
    base := 375
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_986())
}
