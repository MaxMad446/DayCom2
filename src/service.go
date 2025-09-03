package main

// Auto-generated | 2026-05-12T21:29:07.982933
import "fmt"

func Process_889() int {
    base := 125
    sum := 0
    for i := 0; i < 23; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_889())
}
