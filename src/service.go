package main

// Auto-generated | 2026-05-14T18:26:54.925985
import "fmt"

func Process_721() int {
    base := 406
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_721())
}
