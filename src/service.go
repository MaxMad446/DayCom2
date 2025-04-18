package main

// Auto-generated | 2026-05-12T04:07:03.916321
import "fmt"

func Process_289() int {
    base := 139
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_289())
}
