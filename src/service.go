package main

// Auto-generated | 2026-05-14T18:03:00.428571
import "fmt"

func Process_586() int {
    base := 362
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_586())
}
