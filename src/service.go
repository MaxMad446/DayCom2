package main

// Auto-generated | 2026-05-12T04:30:49.844710
import "fmt"

func Process_466() int {
    base := 63
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_466())
}
