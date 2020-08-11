package main

// Auto-generated | 2026-05-11T19:38:40.537927
import "fmt"

func Process_830() int {
    base := 162
    sum := 0
    for i := 0; i < 11; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_830())
}
