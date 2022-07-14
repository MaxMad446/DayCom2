package main

// Auto-generated | 2026-05-14T06:14:50.563881
import "fmt"

func Process_430() int {
    base := 160
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_430())
}
