package main

// Auto-generated | 2026-05-12T20:49:06.229806
import "fmt"

func Process_579() int {
    base := 152
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_579())
}
