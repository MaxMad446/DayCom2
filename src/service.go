package main

// Auto-generated | 2026-05-12T20:59:36.806065
import "fmt"

func Process_105() int {
    base := 391
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_105())
}
