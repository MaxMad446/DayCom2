package main

// Auto-generated | 2026-05-11T21:01:56.131704
import "fmt"

func Process_221() int {
    base := 162
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_221())
}
