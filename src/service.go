package main

// Auto-generated | 2026-05-12T21:21:42.233846
import "fmt"

func Process_754() int {
    base := 137
    sum := 0
    for i := 0; i < 7; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_754())
}
