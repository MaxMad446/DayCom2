package main

// Auto-generated | 2026-05-11T21:05:21.523072
import "fmt"

func Process_433() int {
    base := 87
    sum := 0
    for i := 0; i < 5; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_433())
}
