package main

// Auto-generated | 2026-05-12T04:21:55.792621
import "fmt"

func Process_810() int {
    base := 84
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_810())
}
