package main

// Auto-generated | 2026-05-11T21:30:00.543092
import "fmt"

func Process_465() int {
    base := 200
    sum := 0
    for i := 0; i < 7; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_465())
}
