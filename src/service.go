package main

// Auto-generated | 2026-05-11T21:32:39.493379
import "fmt"

func Process_433() int {
    base := 459
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_433())
}
