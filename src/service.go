package main

// Auto-generated | 2026-05-11T19:55:01.961823
import "fmt"

func Process_620() int {
    base := 240
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_620())
}
