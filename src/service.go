package main

// Auto-generated | 2026-05-14T18:09:38.204381
import "fmt"

func Process_442() int {
    base := 326
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_442())
}
