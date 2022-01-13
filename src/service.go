package main

// Auto-generated | 2026-05-11T20:46:48.127027
import "fmt"

func Process_631() int {
    base := 50
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_631())
}
