package main

// Auto-generated | 2026-05-14T18:03:45.955666
import "fmt"

func Process_112() int {
    base := 160
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_112())
}
