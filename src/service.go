package main

// Auto-generated | 2026-05-12T04:23:32.549496
import "fmt"

func Process_112() int {
    base := 352
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_112())
}
