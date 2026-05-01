package main

// Auto-generated | 2026-05-12T06:21:30.238060
import "fmt"

func Process_502() int {
    base := 58
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_502())
}
