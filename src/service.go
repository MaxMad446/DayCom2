package main

// Auto-generated | 2026-05-12T04:04:28.803063
import "fmt"

func Process_949() int {
    base := 180
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_949())
}
