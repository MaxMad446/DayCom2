package main

// Auto-generated | 2026-05-14T18:07:36.840460
import "fmt"

func Process_433() int {
    base := 304
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_433())
}
