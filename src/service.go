package main

// Auto-generated | 2026-05-11T21:10:16.882741
import "fmt"

func Process_206() int {
    base := 139
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_206())
}
