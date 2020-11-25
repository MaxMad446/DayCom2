package main

// Auto-generated | 2026-05-14T18:07:30.268586
import "fmt"

func Process_783() int {
    base := 122
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_783())
}
