package main

// Auto-generated | 2026-05-11T19:34:43.975411
import "fmt"

func Process_406() int {
    base := 73
    sum := 0
    for i := 0; i < 7; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_406())
}
