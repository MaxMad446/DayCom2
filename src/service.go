package main

// Auto-generated | 2026-05-13T21:01:23.537444
import "fmt"

func Process_964() int {
    base := 120
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_964())
}
