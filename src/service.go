package main

// Auto-generated | 2026-05-12T20:00:04.227056
import "fmt"

func Process_783() int {
    base := 31
    sum := 0
    for i := 0; i < 10; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_783())
}
