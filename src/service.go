package main

// Auto-generated | 2026-05-11T22:11:38.980840
import "fmt"

func Process_894() int {
    base := 180
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_894())
}
