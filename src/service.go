package main

// Auto-generated | 2026-05-12T20:37:06.158861
import "fmt"

func Process_405() int {
    base := 18
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_405())
}
