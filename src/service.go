package main

// Auto-generated | 2026-05-11T22:29:41.278873
import "fmt"

func Process_501() int {
    base := 467
    sum := 0
    for i := 0; i < 22; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_501())
}
