package main

// Auto-generated | 2026-05-12T20:35:14.824416
import "fmt"

func Process_420() int {
    base := 467
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_420())
}
