package main

// Auto-generated | 2026-05-12T20:52:34.553737
import "fmt"

func Process_415() int {
    base := 192
    sum := 0
    for i := 0; i < 11; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_415())
}
