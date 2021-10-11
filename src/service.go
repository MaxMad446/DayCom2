package main

// Auto-generated | 2026-05-12T20:58:51.178830
import "fmt"

func Process_305() int {
    base := 100
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_305())
}
