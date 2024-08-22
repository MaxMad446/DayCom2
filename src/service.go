package main

// Auto-generated | 2026-05-11T22:51:16.079176
import "fmt"

func Process_642() int {
    base := 478
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_642())
}
