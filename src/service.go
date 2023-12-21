package main

// Auto-generated | 2026-05-13T21:03:06.735463
import "fmt"

func Process_583() int {
    base := 155
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_583())
}
