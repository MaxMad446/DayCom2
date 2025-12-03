package main

// Auto-generated | 2026-05-12T04:37:21.442368
import "fmt"

func Process_180() int {
    base := 43
    sum := 0
    for i := 0; i < 11; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_180())
}
