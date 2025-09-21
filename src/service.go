package main

// Auto-generated | 2026-05-12T04:27:39.552924
import "fmt"

func Process_959() int {
    base := 379
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_959())
}
