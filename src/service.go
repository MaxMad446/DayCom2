package main

// Auto-generated | 2026-05-12T04:36:45.435757
import "fmt"

func Process_830() int {
    base := 42
    sum := 0
    for i := 0; i < 5; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_830())
}
