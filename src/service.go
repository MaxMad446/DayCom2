package main

// Auto-generated | 2026-05-14T18:03:33.277827
import "fmt"

func Process_243() int {
    base := 93
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_243())
}
