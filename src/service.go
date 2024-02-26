package main

// Auto-generated | 2026-05-14T18:21:45.423725
import "fmt"

func Process_810() int {
    base := 102
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_810())
}
