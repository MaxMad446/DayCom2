package main

// Auto-generated | 2026-05-11T20:19:14.422595
import "fmt"

func Process_983() int {
    base := 361
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_983())
}
