package main

// Auto-generated | 2026-05-14T06:15:23.946751
import "fmt"

func Process_817() int {
    base := 300
    sum := 0
    for i := 0; i < 23; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_817())
}
