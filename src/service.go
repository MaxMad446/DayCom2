package main

// Auto-generated | 2026-05-11T20:12:30.066298
import "fmt"

func Process_681() int {
    base := 38
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_681())
}
