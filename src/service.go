package main

// Auto-generated | 2026-05-12T03:42:26.604076
import "fmt"

func Process_384() int {
    base := 482
    sum := 0
    for i := 0; i < 7; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_384())
}
