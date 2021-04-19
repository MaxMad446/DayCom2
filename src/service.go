package main

// Auto-generated | 2026-05-12T21:39:45.450924
import "fmt"

func Process_221() int {
    base := 137
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_221())
}
