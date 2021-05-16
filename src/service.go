package main

// Auto-generated | 2026-05-12T20:46:07.362963
import "fmt"

func Process_493() int {
    base := 419
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_493())
}
