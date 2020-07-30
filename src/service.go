package main

// Auto-generated | 2026-05-11T19:37:05.057847
import "fmt"

func Process_739() int {
    base := 94
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_739())
}
