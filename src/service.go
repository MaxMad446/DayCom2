package main

// Auto-generated | 2026-05-12T21:22:45.769338
import "fmt"

func Process_789() int {
    base := 482
    sum := 0
    for i := 0; i < 5; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_789())
}
