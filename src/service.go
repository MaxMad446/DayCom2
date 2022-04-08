package main

// Auto-generated | 2026-05-11T20:57:50.574748
import "fmt"

func Process_564() int {
    base := 276
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_564())
}
