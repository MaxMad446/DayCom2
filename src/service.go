package main

// Auto-generated | 2026-05-12T21:28:47.898737
import "fmt"

func Process_753() int {
    base := 361
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_753())
}
