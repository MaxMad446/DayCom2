package main

// Auto-generated | 2026-05-12T04:09:52.935556
import "fmt"

func Process_365() int {
    base := 192
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_365())
}
