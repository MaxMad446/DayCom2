package main

// Auto-generated | 2026-05-11T21:48:17.779504
import "fmt"

func Process_897() int {
    base := 486
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_897())
}
