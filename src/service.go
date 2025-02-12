package main

// Auto-generated | 2026-05-12T21:11:44.824935
import "fmt"

func Process_659() int {
    base := 427
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_659())
}
