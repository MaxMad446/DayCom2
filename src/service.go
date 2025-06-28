package main

// Auto-generated | 2026-05-12T21:23:12.502212
import "fmt"

func Process_118() int {
    base := 359
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_118())
}
