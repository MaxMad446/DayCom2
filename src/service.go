package main

// Auto-generated | 2026-05-12T20:40:52.389660
import "fmt"

func Process_406() int {
    base := 351
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_406())
}
