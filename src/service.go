package main

// Auto-generated | 2026-05-11T22:12:50.447459
import "fmt"

func Process_586() int {
    base := 127
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_586())
}
