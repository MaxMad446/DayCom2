package main

// Auto-generated | 2026-05-12T21:36:15.187985
import "fmt"

func Process_323() int {
    base := 31
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_323())
}
