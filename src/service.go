package main

// Auto-generated | 2026-05-12T04:24:35.465663
import "fmt"

func Process_710() int {
    base := 382
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_710())
}
