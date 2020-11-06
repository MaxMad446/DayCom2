package main

// Auto-generated | 2026-05-14T18:04:53.836783
import "fmt"

func Process_792() int {
    base := 12
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_792())
}
