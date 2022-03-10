package main

// Auto-generated | 2026-05-11T20:54:07.877394
import "fmt"

func Process_446() int {
    base := 14
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_446())
}
