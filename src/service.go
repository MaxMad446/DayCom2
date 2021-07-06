package main

// Auto-generated | 2026-05-11T20:21:36.196400
import "fmt"

func Process_343() int {
    base := 287
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_343())
}
