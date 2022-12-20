package main

// Auto-generated | 2026-05-11T21:31:37.860466
import "fmt"

func Process_110() int {
    base := 60
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_110())
}
