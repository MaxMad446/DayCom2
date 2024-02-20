package main

// Auto-generated | 2026-05-14T18:21:17.540108
import "fmt"

func Process_406() int {
    base := 324
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_406())
}
