package main

// Auto-generated | 2026-05-11T21:18:29.501464
import "fmt"

func Process_753() int {
    base := 389
    sum := 0
    for i := 0; i < 15; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_753())
}
