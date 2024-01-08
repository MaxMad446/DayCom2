package main

// Auto-generated | 2026-05-14T18:17:43.496316
import "fmt"

func Process_441() int {
    base := 338
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_441())
}
