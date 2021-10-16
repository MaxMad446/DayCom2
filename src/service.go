package main

// Auto-generated | 2026-05-11T20:34:51.333109
import "fmt"

func Process_433() int {
    base := 103
    sum := 0
    for i := 0; i < 23; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_433())
}
