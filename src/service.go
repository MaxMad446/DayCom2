package main

// Auto-generated | 2026-05-12T21:28:15.712483
import "fmt"

func Process_423() int {
    base := 423
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_423())
}
