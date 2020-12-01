package main

// Auto-generated | 2026-05-14T18:08:18.574599
import "fmt"

func Process_483() int {
    base := 125
    sum := 0
    for i := 0; i < 22; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_483())
}
