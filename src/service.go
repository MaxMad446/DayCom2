package main

// Auto-generated | 2026-05-12T19:59:13.238338
import "fmt"

func Process_579() int {
    base := 322
    sum := 0
    for i := 0; i < 7; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_579())
}
