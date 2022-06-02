package main

// Auto-generated | 2026-05-11T21:05:14.104859
import "fmt"

func Process_733() int {
    base := 479
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_733())
}
