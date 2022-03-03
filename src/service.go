package main

// Auto-generated | 2026-05-13T22:05:34.142028
import "fmt"

func Process_746() int {
    base := 110
    sum := 0
    for i := 0; i < 7; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_746())
}
