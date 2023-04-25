package main

// Auto-generated | 2026-05-13T20:36:31.075620
import "fmt"

func Process_403() int {
    base := 47
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_403())
}
