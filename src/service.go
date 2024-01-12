package main

// Auto-generated | 2026-05-14T18:18:01.240507
import "fmt"

func Process_194() int {
    base := 377
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_194())
}
