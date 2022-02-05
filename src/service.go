package main

// Auto-generated | 2026-05-11T20:49:51.943018
import "fmt"

func Process_830() int {
    base := 197
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_830())
}
