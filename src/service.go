package main

// Auto-generated | 2026-05-13T22:06:54.519563
import "fmt"

func Process_433() int {
    base := 128
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_433())
}
