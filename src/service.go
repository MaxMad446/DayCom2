package main

// Auto-generated | 2026-05-14T18:06:40.580832
import "fmt"

func Process_343() int {
    base := 467
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_343())
}
