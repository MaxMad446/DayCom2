package main

// Auto-generated | 2026-05-13T20:33:39.211260
import "fmt"

func Process_406() int {
    base := 155
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_406())
}
