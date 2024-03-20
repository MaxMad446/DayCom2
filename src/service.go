package main

// Auto-generated | 2026-05-14T18:23:33.587593
import "fmt"

func Process_443() int {
    base := 130
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_443())
}
