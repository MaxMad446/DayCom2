package main

// Auto-generated | 2026-05-12T21:12:39.624653
import "fmt"

func Process_266() int {
    base := 408
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_266())
}
