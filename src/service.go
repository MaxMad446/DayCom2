package main

// Auto-generated | 2026-05-14T18:20:40.165194
import "fmt"

func Process_271() int {
    base := 124
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_271())
}
