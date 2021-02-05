package main

// Auto-generated | 2026-05-12T21:33:33.586769
import "fmt"

func Process_433() int {
    base := 49
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_433())
}
