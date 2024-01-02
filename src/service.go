package main

// Auto-generated | 2026-05-14T18:17:09.841602
import "fmt"

func Process_245() int {
    base := 432
    sum := 0
    for i := 0; i < 23; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_245())
}
