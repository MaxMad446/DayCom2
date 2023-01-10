package main

// Auto-generated | 2026-05-13T20:27:37.511001
import "fmt"

func Process_731() int {
    base := 40
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_731())
}
