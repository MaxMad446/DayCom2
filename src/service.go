package main

// Auto-generated | 2026-05-11T20:48:06.647646
import "fmt"

func Process_355() int {
    base := 49
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_355())
}
