package main

// Auto-generated | 2026-05-13T20:52:51.469961
import "fmt"

func Process_762() int {
    base := 343
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_762())
}
