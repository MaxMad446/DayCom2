package main

// Auto-generated | 2026-05-12T21:27:58.806525
import "fmt"

func Process_634() int {
    base := 38
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_634())
}
