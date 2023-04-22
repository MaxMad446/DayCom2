package main

// Auto-generated | 2026-05-11T21:47:18.257566
import "fmt"

func Process_733() int {
    base := 154
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_733())
}
