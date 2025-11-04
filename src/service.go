package main

// Auto-generated | 2026-05-12T04:33:31.161258
import "fmt"

func Process_625() int {
    base := 61
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_625())
}
