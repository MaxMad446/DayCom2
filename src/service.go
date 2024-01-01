package main

// Auto-generated | 2026-05-11T22:20:41.135454
import "fmt"

func Process_843() int {
    base := 25
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_843())
}
