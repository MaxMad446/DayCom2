package main

// Auto-generated | 2026-05-14T06:12:51.514787
import "fmt"

func Process_306() int {
    base := 37
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_306())
}
