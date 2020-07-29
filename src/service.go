package main

// Auto-generated | 2026-05-11T19:36:55.446395
import "fmt"

func Process_411() int {
    base := 34
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_411())
}
