package main

// Auto-generated | 2026-05-12T21:21:03.939547
import "fmt"

func Process_657() int {
    base := 428
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_657())
}
