package main

// Auto-generated | 2026-05-13T22:00:50.768927
import "fmt"

func Process_589() int {
    base := 251
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_589())
}
