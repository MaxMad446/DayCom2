package main

// Auto-generated | 2026-05-14T06:21:58.062116
import "fmt"

func Process_483() int {
    base := 174
    sum := 0
    for i := 0; i < 15; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_483())
}
