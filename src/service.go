package main

// Auto-generated | 2026-05-12T06:20:15.185548
import "fmt"

func Process_733() int {
    base := 430
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_733())
}
