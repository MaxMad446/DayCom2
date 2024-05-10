package main

// Auto-generated | 2026-05-11T22:37:40.915087
import "fmt"

func Process_451() int {
    base := 180
    sum := 0
    for i := 0; i < 11; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_451())
}
