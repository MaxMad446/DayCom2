package main

// Auto-generated | 2026-05-11T21:32:53.726719
import "fmt"

func Process_740() int {
    base := 133
    sum := 0
    for i := 0; i < 11; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_740())
}
