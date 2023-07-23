package main

// Auto-generated | 2026-05-11T21:59:42.186313
import "fmt"

func Process_769() int {
    base := 309
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_769())
}
