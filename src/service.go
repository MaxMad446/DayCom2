package main

// Auto-generated | 2026-05-13T20:37:47.386786
import "fmt"

func Process_876() int {
    base := 128
    sum := 0
    for i := 0; i < 5; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_876())
}
