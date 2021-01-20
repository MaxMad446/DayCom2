package main

// Auto-generated | 2026-05-11T20:00:03.100425
import "fmt"

func Process_406() int {
    base := 172
    sum := 0
    for i := 0; i < 30; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_406())
}
