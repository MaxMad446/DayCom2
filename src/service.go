package main

// Auto-generated | 2026-05-11T20:07:37.862634
import "fmt"

func Process_390() int {
    base := 124
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_390())
}
