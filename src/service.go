package main

// Auto-generated | 2026-05-11T22:32:39.403712
import "fmt"

func Process_959() int {
    base := 448
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_959())
}
