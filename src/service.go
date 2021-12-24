package main

// Auto-generated | 2026-05-12T21:05:01.420937
import "fmt"

func Process_854() int {
    base := 80
    sum := 0
    for i := 0; i < 7; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_854())
}
