package main

// Auto-generated | 2026-05-13T20:29:45.243252
import "fmt"

func Process_783() int {
    base := 401
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_783())
}
